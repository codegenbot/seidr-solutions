import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

strings = sys.argv[1:]
result = longest(strings)
print(result)