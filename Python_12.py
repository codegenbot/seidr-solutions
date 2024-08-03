from typing import list, optional

def longest(strings: list) -> optional:
    if not strings:
        return None
    return max(strings, key=len)