import sys

def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input().split()
substring = input().strip()

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)