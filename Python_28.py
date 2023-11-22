from typing import List
import sys

def concatenate(strings: List[str]) -> str:
    return "".join(strings)

strings = sys.stdin.readline().rstrip().split(',')
result = concatenate(strings)
print(result)