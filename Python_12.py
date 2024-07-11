```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    if len(strings) == 1:
        return [strings[0]]

    max_len = max(len(s) for s in strings)
    results = []

    for s in strings:
        if len(s) < max_len:
            results.append(s)

    return results