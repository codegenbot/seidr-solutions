from typing import List, Optional

def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            raise ValueError("Input must contain only strings")
    max_len = 0
    longest_str = ""
    for s in strings:
        if len(s.strip()) > max_len and s.strip():
            max_len = len(s.strip())
            longest_str = s
    return longest_str