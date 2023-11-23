def filter_by_prefix(strings, prefix):
    filtered_strings = []
    for string in strings:
        if string.startswith(prefix):
            filtered_strings.append(string)
    return filtered_strings

strings = input("Enter a list of strings separated by comma: ").split(",")
prefix = input("Enter a prefix: ")

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)