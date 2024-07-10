import sys

substring = input().strip()

strings = []
for line in sys.stdin:
    string = line.strip()
    if string == "----":
        break
    strings.append(string)

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))