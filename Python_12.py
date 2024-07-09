from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            raise ValueError("Input must contain only strings")
    return max(map(str, filter(None, strings)), key=len)