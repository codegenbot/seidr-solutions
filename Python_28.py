```
from typing import List

def concatenate(strings: List[str]) -> str:
    while '' not in strings:
        strings = [s for s in strings if s != '']
    return ''.join(strings)