```
from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not isinstance(strings, list):
        raise TypeError("Input is not a list of strings")
    if len(strings) == 0:
        return None
    max_length = 0
    longest_str = None
    for s in strings:
        if not isinstance(s, str):
            raise TypeError("Each element in the list should be a string")
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str