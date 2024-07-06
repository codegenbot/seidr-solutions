```
from typing import List, Optional


def longest(strings: List[str]) -> Optional[int]:
    if not strings:
        return None

    while True:
        user_input = input("Enter a list of strings separated by space (or 'stop' to quit): ")
        
        if user_input.lower() == 'stop':
            break
        
        try:
            strings = [s for s in user_input.split() if len(s) > 0]
            return max(len(s) for s in strings)
        except ValueError:
            print("Invalid input. Please enter a list of non-empty strings.")