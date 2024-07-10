def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = []
try:
    while True:
        strings.append(input())
except EOFError:
    pass

substring = input().strip()

filtered_strings = filter_strings(strings, substring)
print(str(filtered_strings))