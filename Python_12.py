```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    max_len = max(len(s) for s in strings)
    results = [s for s in strings if len(s) == max_len]
    return results