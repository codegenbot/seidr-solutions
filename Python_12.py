from typing import List, Optional


def longest(strings: List[str]) -> Optional[int]:
    if not strings:
        return None
    return max(len(s) for s in strings if len(s) > 0) or 0