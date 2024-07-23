from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not isinstance(strings, list):
        raise TypeError("Input is not a list")
    for s in strings:
        if not isinstance(s, str):
            raise ValueError(f"Invalid input '{s}' is not a string")

    if not strings:
        return None
    return max(strings, key=len)