```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not all(isinstance(s, str) for s in strings):
        return None
    alpha_strings = [s for s in strings if set(s).issubset('abcdefghijklmnopqrstuvwxyz')]
    return max(alpha_strings, key=len) if alpha_strings else None