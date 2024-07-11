def concatenate_strings(strings):
    return "".join(strings)


# Read input from user as a string
strings = input("Enter a list of strings separated by space: ")

# Split the input string into a list of strings
strings_list = strings.split()

# Call the function with the input
result = concatenate_strings(strings_list)

# Output the result
print(result)