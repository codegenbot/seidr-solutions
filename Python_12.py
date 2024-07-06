from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = max(len(s) for s in strings)
    long_strings = [s for s in strings if len(s) == max_length]
    return long_strings[0] if long_strings else None