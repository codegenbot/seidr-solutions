```
from typing import List, Optional


def longest() -> Optional[str]:
    strings = input("Enter a list of strings (comma-separated): ").split(',')
    if not all(isinstance(s, str) for s in strings):
        raise ValueError("Input must contain only strings")
    return max(map(str.strip, strings), key=len)