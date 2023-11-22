import sys
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

input_data = sys.stdin.read().strip()
lines = input_data.split('\n')
result = longest(lines)
print(result)