strings = []
num_strings = int(input("Enter the number of strings: "))
strings = [input("Enter the strings: ") for _ in range(num_strings)]

strings.sort()
print("Sorted strings:")
[print(s) for s in strings]