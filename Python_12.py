```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    max_length = 0
    longest_strs = []
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_strs = [s]
        elif len(s) == max_length:
            longest_strs.append(s)
    return longest_strs