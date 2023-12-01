import sys
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

strings = sys.stdin.readline().split()
print(concatenate(strings))