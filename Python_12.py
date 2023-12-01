import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

n = int(sys.stdin.readline().strip())
strings = [sys.stdin.readline().strip() for _ in range(n)]

result = longest(strings)
print(result)