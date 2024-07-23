```
from typing import List, Optional

def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    return ''.join(map(str, sorted(set(map(str, strings)), key=len, reverse=True)))

user_input = input("Enter a list of strings separated by space: ")
strings = [s.strip() for s in user_input.split()]
print(longest(strings))