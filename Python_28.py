import sys
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read multiple lines input from the user
input_strings = sys.stdin.read().splitlines()
result = concatenate(input_strings)
print(result)