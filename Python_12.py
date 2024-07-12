from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not all(isinstance(s, str) or s is None for s in strings):
        return None
    return next((s for s in strings if len(s) == max(len(x) for x in strings)), None)