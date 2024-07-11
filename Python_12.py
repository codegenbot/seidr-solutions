```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if len(strings) < 2:
        return max(strings, default=None)
    return max(strings, key=len) if strings else None

num_strings = int(input("Enter the number of strings: "))
strings = [input("Please enter a string: ") for _ in range(num_strings)]
print(longest(strings)) if longest(strings) else print("No strings provided.")