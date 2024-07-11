```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    strings = []
    for s in input_strings:
        if isinstance(s, str):
            strings.append(s)
        else:
            print(f"Invalid input '{s}' (not a string). Try again!")
            print("Please enter a valid string: ")
            input_strings.clear()
            num_strings -= 1
    return max(strings, key=len) if strings else None

num_strings = int(input("Enter the number of strings: "))
input_strings = [input("Please enter a string: ") for _ in range(num_strings)]
print(longest(input_strings))