def concatenate_strings(strings):
    return "".join(strings)

# Modify input line to read multiple strings
strings = input("Enter multiple strings separated by space: ").split()

# Call the function with the input
result = concatenate_strings(strings)

# Output the result
print(result)