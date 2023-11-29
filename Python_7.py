def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

strings = input("Enter the list of strings separated by a space: ").split()
substring = input("Enter the substring to filter by: ").strip()
result = filter_by_substring(strings, substring)
print(result)