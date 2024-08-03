from typing import Optional, list

def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = strings[0]
    for s in strings:
        if len(s) > len(longest_str):
            longest_str = s
    return longest_str