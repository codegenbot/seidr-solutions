strings = input("Enter strings separated by spaces, e.g., hello world test: ")
strings = strings.split()

substring = input("Enter a substring to check for, e.g., ello: ").lower()

result = find_strings(strings, substring)
print(result)