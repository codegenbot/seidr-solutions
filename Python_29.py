import sys

def filter_by_prefix(strings, prefix):
    return sorted([string for string in strings if string.startswith(prefix)])

if len(sys.argv) >= 3:
    strings = sys.argv[1:-1]
    prefix = sys.argv[-1]

    filtered_strings = filter_by_prefix(strings, prefix)

    print(filtered_strings)
else:
    print("Please provide a list of strings and a prefix as command line arguments.")