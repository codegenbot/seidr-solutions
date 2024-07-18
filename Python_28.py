def concatenate_strings(strings):
    return "".join(strings)

user_input = input("Enter strings separated by spaces: ").split()
result = concatenate_strings(user_input)
print(result)