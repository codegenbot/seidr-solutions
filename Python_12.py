from typing import List, Optional


def longest(strings: List[str]) -> Optional[int]:
    if not strings:
        return 0
    return max(len(s) for s in strings)