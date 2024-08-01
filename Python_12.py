```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = 0
    result = strings[0]
    for string in strings:
        if len(string) > max_length:
            max_length = len(string)
            result = string
    return result