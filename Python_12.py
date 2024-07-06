```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Test your function with a list of strings
print(longest(["Hello", "world!", "Python", "is", "awesome"]))