```
from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        try:
            strings = input("Enter a list of strings (space-separated), or 'quit' to exit: ")
            if strings.lower() == 'quit':
                return []

            prefix = input("Enter a prefix, or 'back' to go back: ")

            if prefix.lower() == 'back':
                return filter_by_prefix()

            if not strings or not prefix:
                raise ValueError("Please enter valid inputs!")

            filtered_strings = [s.strip() for s in strings.split() if s.strip().startswith(prefix)]
            
            return filtered_strings
        except ValueError as e:
            print(f"Error: {e}")