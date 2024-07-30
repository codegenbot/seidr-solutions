def concatenate_strings(strings):
    return "".join(strings)

user_input = list(input("Enter a string separated by spaces: ").split())
result = concatenate_strings(user_input)
print(result)