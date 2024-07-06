from typing import List, Optional


def longest(strings: str) -> Optional[str]:
    if not strings:
        return None
    return max(map(str.strip, strings.split(',')), key=len)