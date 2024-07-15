from typing import List, Optional
strings = input("Enter strings separated by spaces: ").split()
def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))