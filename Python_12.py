from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

strings = input("Enter the strings separated by commas: ").split(", ")
result = longest(strings)
print(result)