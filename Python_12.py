from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    return max(strings, key=len)

result = longest(["apple", "banana", "orange"])
print(result)