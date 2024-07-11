from typing import List


def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    strings = [str(s) for s in strings if isinstance(s, str)]
    if not all(isinstance(s, str) for s in strings):
        raise ValueError("Invalid input. Only strings or None are allowed.")
    return max(strings, key=len)