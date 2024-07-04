import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = []
    for line in sys.stdin:
        strings.extend(line.strip().split())
    print(longest(strings))