from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            return None
    return max(strings, key=len)