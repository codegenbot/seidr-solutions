from typing import List

def concatenate(strings: List[str]) -> str:
    strings = input().split()
    result = ''.join(strings)
    return result