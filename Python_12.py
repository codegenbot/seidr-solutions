from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    strings = input("Enter a list of strings separated by spaces: ").split()
    if not strings:
        return None
    max_length = max(len(s) for s in strings)
    return next(s for s in strings if len(s) == max_length)