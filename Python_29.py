strings = input("Enter the strings separated by space: ").split()
prefix = input("Enter the prefix: ")

filtered_strings = filter_by_prefix(strings, prefix)
print(filtered_strings)