def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings separated by space: ").split()
substring = input("Enter a substring to filter by: ")
print(filter_strings(strings, substring))