```
from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None

    def is_printable(s: str) -> bool:
        for char in s:
            if ord(char) > 126:
                return False
        return True

    max_length = 0
    longest_string = None

    for string in filter(is_printable, strings):
        if len(string) > max_length:
            max_length = len(string)
            longest_string = string

    return longest_string