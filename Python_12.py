from typing import List, Optional


def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    return max((s if isinstance(s, str) else '' for s in strings), key=len)