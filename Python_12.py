```
from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not isinstance(strings, list):
        return "Invalid input. Please provide a list of strings."
    if not all(isinstance(s, str) for s in strings):
        return "Invalid input. All elements must be strings."
    if not strings:
        return None
    return max(strings, key=len)