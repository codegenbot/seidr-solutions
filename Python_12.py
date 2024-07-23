from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = max((s for s in strings), key=len)
    return ''.join(sorted(longest_str))