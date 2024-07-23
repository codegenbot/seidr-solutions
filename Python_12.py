from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None

    def is_printable(s: str) -> bool:
        return all(32 <= ord(c) < 127 for c in s)

    return max((s for s in strings if is_printable(s)), key=len)