from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

strings = [str(s) for s in input().split()]
result = longest(strings)
print(result)