```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

num_strings = int(input("Enter the number of strings: \n"))
strings = [input("Please enter a string: \n") for _ in range(num_strings)]
print(longest(strings))