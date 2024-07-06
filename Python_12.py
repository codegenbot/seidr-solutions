```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    while True:
        try:
            num_strings = int(input("Please enter the number of strings to input: "))
            strings = list(map(str, input(f"Enter {num_strings} series of strings (space separated): ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers and strings separated by spaces.")
    return max(strings, key=len)