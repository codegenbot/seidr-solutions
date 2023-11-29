def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

strings = input("Enter the strings: ").split()
substring = input("Enter the substring: ").strip()
result = filter_by_substring(strings, substring)
print(result)