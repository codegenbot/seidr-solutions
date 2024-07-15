def find_strings(strings, substring):
    return [s for s in strings if substring in s]

# Input from the user
strings = input("Enter strings separated by spaces: ").split()
substring = input("Enter a substring to check for: ")

# Call the function with the given input
result = find_strings(strings, substring)
print(result)