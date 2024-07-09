```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    result = None
    for s in strings:
        if len(s) > max_len and all(c.isupper() or c.isspace() for c in s):
            max_len = len(s)
            result = s
    return result