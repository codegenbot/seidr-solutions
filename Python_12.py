from typing import List, Optional


def longest(strings: List[Optional[str]]): 
    max_len = 0
    result = None
    for s in strings:
        if s is not None and len(s) > max_len:
            max_len = len(s)
            result = s
    return result