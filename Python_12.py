from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = ""
    longest_len = 0
    for string in strings:
        if len(string) > longest_len:
            longest_str = string
            longest_len = len(string)
    return longest_str