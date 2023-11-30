from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

n = int(input())
strings = []
for _ in range(n):
    strings.append(input())

result = concatenate(strings)
print(result)