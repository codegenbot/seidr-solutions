def concatenate_strings(strings):
    return "".join(strings)

strings = input("Enter a list of strings separated by space: ")

strings_list = strings.split()

result = concatenate_strings(strings_list)

print(result)