```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = len(max(strings, key=len))
    longest_strings = [s for s in strings if len(s) == max_length]
    return longest_strings[0] if longest_strings else None