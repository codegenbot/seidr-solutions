from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    print(f"Input list: {strings}")
    return max(strings, key=len)