def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings, substring = input("Enter a list of strings separated by space (in quotes): ").split(), input("Enter a substring to filter by: ")
print(filter_strings(strings, substring))