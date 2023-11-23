def filter_by_substring(strings, substring):
    return [string for string in strings if substring in string]

strings = input().split()
substring = input()

result = filter_by_substring(strings, substring)
print(result)