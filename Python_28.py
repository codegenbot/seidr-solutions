def concatenate_strings(strings):
    return "".join(strings)

strings = input("Enter strings separated by spaces: ").split()
result = concatenate_strings(strings)
print(result)