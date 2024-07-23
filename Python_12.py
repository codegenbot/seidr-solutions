from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None

    def is_printable(s: str) -> bool:
        for char in s:
            if ord(char) > 126:
                return False
        return True

    return max(filter(is_printable, strings), key=len)