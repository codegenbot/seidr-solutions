from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not isinstance(strings, list):
        return None
    if not all(isinstance(string, str) for string in strings):
        return None
    return max(strings, key=len)