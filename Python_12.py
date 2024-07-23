from typing import Optional, list

def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    printable_strings = [s for s in strings if all(ord(c) < 0x10000 and c.isprintable() for c in s)]
    return max(printable_strings, key=len) if printable_strings else None