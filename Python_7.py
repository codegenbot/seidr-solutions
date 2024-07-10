def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = []
while True:
    line = input().strip()
    if not line:
        break
    strings.append(line)

substring = input().strip()

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)