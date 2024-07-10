def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings (separated by space): ").split()
substring = input("Enter the substring to filter on: ")

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)