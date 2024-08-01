def concatenate_strings(strings):
    result = "".join(strings)
    return result

strings = input("Enter a list of strings separated by spaces: ").split()
print(concatenate_strings(strings))