from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(sorted(strings, key=lambda s: (len(s), s)), default=None)