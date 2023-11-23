def filter_by_prefix(strings, prefix):
    return [string for string in strings if string.startswith(prefix)]

strings = input("Enter the comma-separated list of strings: ").split(",")
prefix = input("Enter the prefix to filter by: ")

filtered_strings = filter_by_prefix(strings, prefix)

print("Filtered strings:", filtered_strings)