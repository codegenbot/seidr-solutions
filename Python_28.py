from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

strings = input().split()
print(concatenate(strings))