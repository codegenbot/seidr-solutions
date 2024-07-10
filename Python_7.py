import sys

strings = []
try:
    while True:
        string = sys.stdin.readline().rstrip()
        if string == "----":
            break
        strings.append(string)
except EOFError:
    pass

substring = sys.stdin.readline().rstrip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print("\n".join(filtered_strings))