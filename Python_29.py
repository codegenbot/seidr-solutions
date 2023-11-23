def filter_by_prefix(strings, prefix):
    return [string for string in strings if string.startswith(prefix)]

strings = raw_input().split(",")
prefix = raw_input()

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)