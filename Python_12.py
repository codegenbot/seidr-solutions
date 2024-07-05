from typing import List, Optional

def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if isinstance(s, str)]
    return max(strings, key=len) if strings else None