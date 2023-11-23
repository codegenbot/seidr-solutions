strings = input("Enter a list of strings separated by comma: ").split(",")
prefix = input("Enter a prefix: ")

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)