def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]


strings = input().split()  # Accept a single line of space-separated strings
substring = input().strip()
result = filter_by_substring(strings, substring)
print(result)