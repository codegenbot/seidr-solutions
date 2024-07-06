from typing import List, Optional


def longest(strings: List[str]) -> Optional[int]:
    if not strings:
        return None
    for s in strings:
        try:
            len(s)
        except AttributeError:
            return None
    return max(len(s) for s in strings)