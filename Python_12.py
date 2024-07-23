from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return ''.join(sorted(set([s for s in strings]), key=len, reverse=True))