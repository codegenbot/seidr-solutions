```
from typing import list, optional

def longest(strings: list[str]) -> optional[str]:
    if not strings:
        return None
    return max(strings, key=len)