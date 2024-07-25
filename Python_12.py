from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

result = longest(input("Please enter a list of strings separated by space: ").split())
print(result)