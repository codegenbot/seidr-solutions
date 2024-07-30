def concatenate_strings(strings):
    return "".join(strings)

user_input = input()
strings = user_input.split()
result = concatenate_strings(strings)
print(result)