```
from typing import List, Optional
def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(set(strings), key=len)