strings = []
try:
    while True:
        string = input().strip()
        if string == "----":
            break
        strings.append(string)
except EOFError:
    pass

try:
    while True:
        substring = input().strip()
        if not substring:
            break
except EOFError:
    pass

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))