import sys

def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

input_string = sys.stdin.read().strip()
print(prefixes(input_string))