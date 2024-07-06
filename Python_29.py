```
from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        strings = input("Enter a list of strings (space-separated): ")
        try:
            strings = [s.strip() for s in strings.split()]
            break
        except ValueError:
            print("Invalid input. Please enter a list of space-separated strings.")
    
    while True:
        prefix = input("Enter a prefix: ")
        if len(prefix) > 0:
            break
        print("Prefix cannot be empty.")

    return [s for s in strings if s.startswith(prefix)]