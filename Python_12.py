from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not all(isinstance(s, str) or s is None for s in strings):
        return None
    return max((s for s in strings if isinstance(s, str)), key=len)