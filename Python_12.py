from typing import List, Optional

def longest() -> Optional[str]:
    strings = input("Enter strings separated by space: ").split()
    if not strings:
        return None
    return max(strings, key=len)