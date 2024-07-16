from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

user_input = input("Enter strings separated by spaces: ")
strings = user_input.strip().split()

print(longest(strings))