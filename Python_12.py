```
from typing import Optional


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None

    result = ""
    max_len = 0
    
    for s in strings:
        if all(ord(c) < 128 for c in s):
            if len(s) > max_len:
                result = s
                max_len = len(s)

    return result