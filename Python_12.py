import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

input_list = sys.stdin.readline().rstrip().split()
result = longest(input_list)
print(result)