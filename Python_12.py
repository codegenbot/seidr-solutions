from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = 0
    result = []
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            result = [s]
        elif len(s) == max_length:
            result.append(s)
    return result[-1] if result else None