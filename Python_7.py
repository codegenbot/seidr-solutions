def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = raw_input("Enter a list of strings separated by space (in quotes):\n").split()
substring = raw_input("Enter a substring to filter by: ")
print(filter_strings(strings, substring))