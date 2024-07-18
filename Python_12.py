# Read input as a string and split by spaces
strings = input("Enter a list of strings separated by spaces: ").split()

# Call the longest function with the input list of strings
result = longest(strings)
print(result)