```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            print(f"Invalid input '{s}' (not a string). Try again!")
            return None
    return max(strings, key=len) if strings else None

num_strings = int(input("Enter the number of strings: "))
input_strings = []
for _ in range(num_strings):
    s = input("Please enter a string: ")
    while not isinstance(s, str):
        print(f"Invalid input '{s}' (not a string). Try again!")
        print("Please enter a valid string: ")
        s = input("Please enter a string: ")
    input_strings.append(s)
print(longest(input_strings))