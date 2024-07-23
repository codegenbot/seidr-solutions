```
from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


user_input = input()
longest([string.strip() for string in user_input.split(",")])