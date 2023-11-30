def filter_by_prefix(strings, prefix):
    return [string for string in strings if string.startswith(prefix)]

strings = input().split()
prefix = input()
result = filter_by_prefix(strings, prefix)
print(result)