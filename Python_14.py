import sys
input_string = sys.stdin.read().strip()
def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

print(prefixes(input_string))