import sys
from typing import List, Optional

strings = [sys.stdin.readline().strip() for _ in range(int(input()))]

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (-len(x), x))

print(longest(strings))