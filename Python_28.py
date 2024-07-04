from typing import List
import sys

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = sys.stdin.read().strip().split()
result = concatenate(input_strings)
print(result)