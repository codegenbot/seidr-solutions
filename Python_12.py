from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

strings = []
strings = [input() for _ in range(len(strings))]

result = longest(strings)
print(result)