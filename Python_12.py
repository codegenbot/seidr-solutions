```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if isinstance(s, str)]
    return max(strings, key=len) if strings else None

num_strings = input("Enter the number of strings: ")

try:
    num_strings = int(num_strings)
except ValueError:
    print("Invalid input. Please enter a valid integer.")
else:
    if num_strings < 1:
        print("Number of strings must be at least 1.")
    else:
        strings = [input(f"Please enter string {i+1}: ") for i in range(num_strings)]
        print(longest(strings)) if longest(strings) else print("No strings provided.")