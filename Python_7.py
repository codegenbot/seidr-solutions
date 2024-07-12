```
strings = [i.lower() for i in input("Enter space separated strings: ").split()]
substring = input("Enter a substring to search: ").lower()
result = filter_by_substring(strings, substring)
print(result)

def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]