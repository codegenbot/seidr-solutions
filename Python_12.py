```
from typing import List, Optional


def longest(strings: List[str]) -> Optional[int]:
    if not strings:
        return 0
    max_len = max(len(s) for s in strings if s)
    return max_len or 0