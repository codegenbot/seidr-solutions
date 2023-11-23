import sys

def filter_by_prefix(strings, prefix):
    return sorted({string for string in strings if string.startswith(prefix)})

strings = sys.argv[1:]
prefix = sys.argv[2]

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)