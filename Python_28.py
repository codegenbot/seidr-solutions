def concatenate_strings(strings):
    return "".join(strings)

# Read input from the user
strings = input("Enter a list of strings separated by space: ").split()

# Call the function with the input
result = concatenate_strings(strings)

# Output the result
print(result)