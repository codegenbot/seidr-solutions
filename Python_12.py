from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    elif all(not s for s in strings):
        return ""
    else:
        return max(strings, key=len)