import sys

def filter_by_prefix(strings, prefix):
    return sorted({string for string in strings if string.startswith(prefix)})

strings = sys.argv[1:]
if len(sys.argv) >= 3:
    prefix = sys.argv[2]
else:
    prefix = ""

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)