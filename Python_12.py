from typing import Optional

def longest(strings: str) -> Optional[str]:
    if not strings:
        return None
    string_list = strings.split()
    return max(string_list, key=len)