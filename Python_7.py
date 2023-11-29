def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

strings = input().strip().split()
substring = input().strip()
result = filter_by_substring(strings, substring)
print(result)