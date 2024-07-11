def concatenate_strings(strings):
    return "".join(strings)

strings = input("Enter a list of strings separated by space: ").split()
result = concatenate_strings(strings)
print(result)