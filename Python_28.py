strings = []
try:
    num_strings = int(input())
    strings = [input("Enter the string: ") for _ in range(num_strings)]
    
    strings.sort()
    print("Sorted strings:")
    print(*strings, sep='\n')
except ValueError:
    print("Please enter a valid integer for the number of strings.")