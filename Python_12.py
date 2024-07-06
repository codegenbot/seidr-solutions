from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if s]
    return max(map(str.strip, strings), key=len) if strings else None