```
from typing import List

def concatenate() -> str:
    strings = input("Enter a series of strings (separated by space): ")
    strings_list: List[str] = [s.strip() for s in strings.split()]
    return ''.join(s for s in strings_list if s)