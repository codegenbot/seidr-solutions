strings = [i.lower() for i in input("Enter space separated strings: ").split()]
substring = input("Enter a substring to search: ").lower()
def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]
result = filter_by_substring(strings, substring)
print(result)