def find_strings(strings, substring):
    return [s for s in strings if substring.lower() in s.lower()]

strings = input("Enter strings separated by spaces: ").lower().split()
substring = input("Enter a substring to check for: ").lower()

result = find_strings(strings, substring)
print(result)