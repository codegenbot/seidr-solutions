from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    return max(strings, key=len) if strings else None