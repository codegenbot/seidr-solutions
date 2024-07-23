```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max((s for s in strings if set(s).issubset('abcdefghijklmnopqrstuvwxyz')), key=len)