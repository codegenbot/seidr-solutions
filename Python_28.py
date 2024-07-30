strings = []
try:
    print("Enter the number of strings:")
    num_strings = int(input())
    print("Enter the strings:")
    strings = input().split()[:num_strings]

    strings.sort()
    print("Sorted strings:")
    for s in strings:
        print(s)
except ValueError:
    print("Please enter a valid integer for the number of strings.")