import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x)) 

# Input
strings = sys.stdin.readline().strip().split()

# Output
print(longest(strings))