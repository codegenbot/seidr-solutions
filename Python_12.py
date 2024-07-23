```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    groups = {}
    for s in strings:
        first_char = s[0].upper()
        if first_char not in groups:
            groups[first_char] = []
        groups[first_char].append(s)
    result = ''
    for char in sorted(groups.keys()):
        for s in sorted(set(groups[char]), key=len, reverse=True):
            result += s + ' '
    return result.strip()