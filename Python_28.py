```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Input must be a list of strings."
    return ''.join(map(str, strings))