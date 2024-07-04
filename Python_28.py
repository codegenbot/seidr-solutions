from typing import List
import sys

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = [line.strip() for line in sys.stdin if line.strip()]

result = concatenate(input_strings)
print(result)