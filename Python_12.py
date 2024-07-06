from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = max(len(s) for s in strings)
    max_strings = [s for s in strings if len(s) == max_length]
    if not max_strings:
        return None
    return max_strings[0]