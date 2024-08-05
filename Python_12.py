from typing import List, Optional
strings = input().split()

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

longest(strings)