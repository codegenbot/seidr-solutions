```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    
    max_len = 0
    result = ""

    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            result = s

    return result