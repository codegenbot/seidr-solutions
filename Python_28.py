strings = []
try:
    print("Enter the number of strings:")
    num_strings = int(input())
    print("Enter the strings:")
    strings = [input() for _ in range(num_strings)]
    strings.sort()
    print("Sorted strings:")
    [print(s) for s in strings]
except ValueError:
    print("Please enter a valid integer for the number of strings.")