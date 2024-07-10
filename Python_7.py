num_strings = int(input().strip())
strings = []
while True:
    string = input().strip()
    if string == '----':
        break
    strings.append(string)

substring = input().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print('\n'.join(filtered_strings))