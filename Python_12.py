from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not isinstance(strings, list) or not all(isinstance(s, str) for s in strings):
        return None
    return max(strings, key=len)