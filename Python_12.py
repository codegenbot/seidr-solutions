from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not all(isinstance(s, str) and len(s) > 0 for s in strings):
        raise ValueError("Input list must only contain non-empty strings")
    if not strings:
        return None
    return max(strings, key=len)