from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not isinstance(strings, list):
        raise TypeError("Input should be a list of strings")
    for s in strings:
        if not isinstance(s, str):
            raise TypeError(
                f"All elements in the input list should be strings. Found {s} of type {type(s)}"
            )
    if not strings:
        return None
    return max(strings, key=len)