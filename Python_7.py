import sys

strings = sys.stdin.read().splitlines()

substring = input().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))