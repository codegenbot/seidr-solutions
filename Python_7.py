strings = []
try:
    while True:
        string = input().strip()
        if string == '----':
            break
        strings.append(string)
except EOFError:
    pass

substring = input().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print('\n'.join(filtered_strings))