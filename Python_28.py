def concatenate_strings(strings):
    return "".join(strings)

strings = input("Enter strings separated by spaces: ").split()
print(concatenate_strings(strings))