import sys

def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

try:
    input_string = sys.stdin.read().strip()
    if input_string:
        print("\n".join(prefixes(input_string)))
    else:
        print("No input provided.")
except EOFError:
    print("No input provided.")