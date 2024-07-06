from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = max(strings, key=len)
    return f"The longest string is '{longest_str}' with {len(longest_str)} characters."