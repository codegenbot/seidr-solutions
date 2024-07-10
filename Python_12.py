```
from typing import List, Optional

def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    result = None
    for string in strings:
        if isinstance(string, str) and len(string) > max_len:
            max_len = len(string)
            result = string
    return result