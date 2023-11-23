def filter_by_prefix(strings, prefix):
    return sorted({string for string in strings if string.startswith(prefix)})


strings = input("Enter a list of strings: ").split()
prefix = input("Enter a prefix: ")

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)