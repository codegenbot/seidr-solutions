def filter_by_substring(strings, substring):
    return [string for string in strings if substring in string]

strings = input('Enter a list of strings: ').split()
substring = input('Enter the substring to filter by: ')

result = filter_by_substring(strings, substring)
print(result)