from typing import Optional, list

def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)