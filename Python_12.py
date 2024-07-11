```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if isinstance(s, str)]
    return max(strings, key=len) if strings else None

num_strings = int(input("Enter the number of strings: "))
if num_strings < 0:
    print("Number of strings should be greater than or equal to zero.")
else:
    strings = [input("Please enter a string: ") for _ in range(num_strings)]
    print(longest(strings))