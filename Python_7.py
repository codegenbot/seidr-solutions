def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input().split()
substring = input()

result = filter_strings(strings, substring)
print(result)