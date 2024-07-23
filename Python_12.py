from typing import List, Optional

def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in map(str, strings) if s]  
    return ''.join(sorted(set(strings), key=len, reverse=True))