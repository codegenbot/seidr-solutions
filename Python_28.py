import sys

from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

n = int(sys.stdin.readline().rstrip())
strings = []
for _ in range(n):
    strings.append(sys.stdin.readline().rstrip())

result = concatenate(strings)
print(result)