from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

strings = input("Enter a list of strings separated by spaces: ").strip().split()
result = longest(strings)
print("Longest string from the list:", result)