def concatenate_strings(strings):
    return "".join(strings)

# Read input from the user
input_strings = input().split()

# Call the function with the input
result = concatenate_strings(input_strings)
print(result)