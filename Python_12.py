from typing import List, Optional

def longest(strings: list[str]) -> Optional:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))