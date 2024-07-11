from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return ""
    return max(strings, key=len)