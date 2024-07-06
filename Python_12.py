from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    while True:
        try:
            strings = list(map(str, input("Enter a series of strings (space separated): ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")
    return max(strings, key=len)