import sys

substring = input()

strings = []
try:
    while True:
        string = input()
        if string == "----":
            break
        strings.append(string)
except EOFError:
    pass

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))