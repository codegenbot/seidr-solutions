import sys

def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = sys.stdin.readline().strip().split()
substring = sys.stdin.readline().strip()

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)