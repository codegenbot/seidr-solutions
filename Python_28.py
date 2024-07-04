import sys
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read multiple lines input from the user
input_strings = []
try:
    while True:
        line = input()
        if line:
            input_strings.append(line)
except EOFError:
    pass

result = concatenate(input_strings)
print(result)