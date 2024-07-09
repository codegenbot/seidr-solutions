def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

string_input = input("Enter a list of strings separated by space:\n")
strings = string_input.split()
substring = input("Enter a substring to filter by: ")
print(filter_strings(strings, substring))