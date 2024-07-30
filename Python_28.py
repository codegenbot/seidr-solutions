def concatenate_strings(strings):
    return "".join(strings)

user_input = input("Enter strings separated by spaces: ")
strings = user_input.split()
result = concatenate_strings(strings)
print(result)