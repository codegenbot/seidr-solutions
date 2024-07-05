from typing import List, Optional
import sys

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = [line.strip() for line in sys.stdin]
    print(longest(strings))