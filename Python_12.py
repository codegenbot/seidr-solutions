from typing import List, Optional

def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            raise ValueError("Input must contain only strings")
    return max(map(str, strings), key=len)