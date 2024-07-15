def find_strings(strings, substring):
    return [s for s in strings if substring in s.lower()]

strings = input("Enter strings separated by spaces, e.g., hello world test: ").split()
substring = input("Enter a substring to check for, e.g., ello: ").lower()
result = find_strings(strings, substring)
print(result)