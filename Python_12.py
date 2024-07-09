from typing import List, Optional

def longest(strings: list) -> Optional[str]:
    if not isinstance(strings, list):
        return None
    for s in strings:
        if not isinstance(s, str):
            return None
    if not strings:
        return None
    return max(strings, key=len)