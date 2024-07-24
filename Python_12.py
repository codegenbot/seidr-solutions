from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not all(isinstance(s, str) for s in strings):
        return None
    
    if not strings:
        return None

    return max(strings, key=lambda x: (len(x), x))