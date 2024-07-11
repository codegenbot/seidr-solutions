from typing import List, Optional


def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    return max((str(s) for s in strings), key=lambda x: str(x).replace('[', '').replace(']', ''))