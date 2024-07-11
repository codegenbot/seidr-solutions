```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

strings = input("Please enter a list of strings separated by spaces:\n").split()
while any(not s.isalpha() for s in strings):
    print("Invalid input. Please enter only letters.")
    strings = input("Please enter a list of strings separated by spaces:\n").split()

print(longest(strings))