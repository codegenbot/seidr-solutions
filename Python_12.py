```
from typing import Optional, list

def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = max(len(s) for s in strings)
    return next(s for s in strings if len(s) == max_len)