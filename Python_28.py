from typing import List

def concatenate(strings: List[str]) -> str:
    print('Enter a list of strings to concatenate:')
    strings = input().split()
    return ''.join(strings)