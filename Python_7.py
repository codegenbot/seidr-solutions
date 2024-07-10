def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = raw_input("Enter a list of strings (separated by space): ").split() if sys.version_info[0] < 3 else input("Enter a list of strings (separated by space): ").split()
substring = raw_input("Enter the substring to filter on: ") if sys.version_info[0] < 3 else input("Enter the substring to filter on: ")

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)