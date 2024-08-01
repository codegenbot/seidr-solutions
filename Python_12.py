from typing import List, Optional

def longest(strings: List[str]) -> List[str]:
    if not strings:
        return []
    max_length = max(len(s) for s in strings)
    return [s for s in strings if len(s) == max_length]