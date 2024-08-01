def concatenate_strings(strings):
    return "".join(strings)

strings = input().split()  # Read input from user
result = concatenate_strings(strings)
print(result)  # Return the concatenated string