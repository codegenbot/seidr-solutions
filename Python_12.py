from typing import List, Optional

def longest() -> Optional[str]:
    strings = []
    while True:
        s = input("Enter a string (or 'done' if finished): ")
        if s.lower() == 'done':
            break
        strings.append(s)
    if not strings:
        return None
    return max(strings, key=len)

print(longest())