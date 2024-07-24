```
from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    while True:
        user_input = input("Enter a list of strings (comma-separated): ")
        try:
            strings_list = [s.strip() for s in user_input.split(',')]
            return max(strings_list, key=len)
        except ValueError:
            print("Invalid input. Please enter a comma-separated list of strings.")