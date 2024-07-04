import sys
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = sys.stdin.read().splitlines()
result = concatenate(input_strings)
print(result)