```
from typing import List, Optional


def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if isinstance(s, str)]
    return max(map(str, strings), key=len)