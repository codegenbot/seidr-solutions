def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

strings = input("Enter strings separated by space: ").split()
substring = input("Enter substring: ").strip()
result = filter_by_substring(strings, substring)
print(result)