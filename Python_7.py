def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input().split()
substring = input("Enter a substring to filter by: ")
print(filter_strings(strings, substring))