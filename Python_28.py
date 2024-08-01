def concatenate_strings(strings):
    result = "".join(strings)
    return result

strings = input("Enter strings separated by space: ").split()
output = concatenate_strings(strings)
print(output)