import sys

def concatenate(strings):
    return ''.join(strings)

input_strings = sys.stdin.read().split()
result = concatenate(input_strings)
print(result)