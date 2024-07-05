from typing import List, Optional
import sys

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    try:
        strings = sys.stdin.read().strip().split()
        print(longest(strings))
    except EOFError:
        pass