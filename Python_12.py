from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    return max(strings, key=len, default=None)
 
result = longest(["apple", "banana", "orange"])
print(result)