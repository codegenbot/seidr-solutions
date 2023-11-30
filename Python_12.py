from typing import List, Optional
import sys


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


result = longest(sys.stdin.readline().strip().split(","))
print(result)