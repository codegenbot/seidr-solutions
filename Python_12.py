from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = ''
    for s in strings:
        if len(s) > max_len and (not longest_str or len(s) >= len(longest_str)):
            max_len = len(s)
            longest_str = s
    return longest_str