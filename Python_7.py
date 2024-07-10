import sys

strings = []
while True:
    string = sys.stdin.readline().strip()
    if string == '----':
        break
    strings.append(string)

substring = sys.stdin.readline().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print('\n'.join(filtered_strings))