from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

strings = []
n = int(input())

for _ in range(n):
    strings.append(input())

result = concatenate(strings)
print(result)