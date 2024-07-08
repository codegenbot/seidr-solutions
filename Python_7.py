def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input("Enter strings separated by spaces: ").split()
substring = input("Enter the substring: ")
print(filter_strings(strings, substring))