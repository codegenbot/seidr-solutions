from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            raise ValueError("Invalid input")
    return max(strings, key=len)