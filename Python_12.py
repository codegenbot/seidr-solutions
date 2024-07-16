import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x)) 

# Fix the input reading method to use input() instead of sys.stdin.readline()
strings = input().strip().split()

# Output
print(longest(strings))