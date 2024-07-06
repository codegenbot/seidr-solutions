```
from typing import List

def longest(strings: List[str]) -> str:
    if not strings:
        return None
    return max(strings, key=len)