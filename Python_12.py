from typing import List, Optional
import re

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

if __name__ == "__main__":
    strings = [s.strip() for s in re.split(r',\s*', input().strip())]
    print(longest(strings))