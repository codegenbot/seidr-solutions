```
from typing import List, Optional

def longest() -> Optional[str]:
    strings = []
    while True:
        user_input = input("Enter a string (or 'done' to finish): ")
        if user_input.lower() == 'done':
            break
        strings.append(user_input)
    
    if not strings:
        return None
    return max(strings, key=len)