def filter_by_prefix(strings, prefix):
    return sorted({string for string in strings if string.startswith(prefix)})


strings = input().strip().split()
prefix = input().strip()

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)