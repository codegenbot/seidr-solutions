```
from typing import List

def concatenate(input_strings: List[str]) -> str:
    strings = input("Enter strings separated by space: ").split()
    return ''.join(strings)