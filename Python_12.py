from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max([s for s in strings if all(ord(c) < 128 for c in s)], key=len)