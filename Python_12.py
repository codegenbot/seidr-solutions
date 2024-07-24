from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

strings = input("Enter space-separated strings: ").split()
result = longest(strings)
print(result)