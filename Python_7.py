def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

try:
    strings = input().split()
    substring = input().strip()
except EOFError:
    exit()

result = filter_by_substring(strings, substring)
print(result)