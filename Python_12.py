from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not strings:
        return None
    if not all(isinstance(s, str) or s is None for s in strings):
        return None
    max_len = len(max(filter(None, strings)))
    return next((s for s in strings if s is not None and len(s) == max_len), None)