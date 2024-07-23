from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max((s for s in strings), key=len) if any(ord(c) < 128 for string in strings for c in string) else None