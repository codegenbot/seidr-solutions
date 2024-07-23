from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return ''.join(sorted(set(strings), key=len, reverse=True))