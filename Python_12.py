```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return ""
    return max(strings, key=len)