```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    while True:
        try:
            strings = list(map(str, input("Enter a series of strings (space separated): ").split()))
            if len(set(strings)) == len(strings):
                return max(strings, key=len)
            print("Invalid input. Please enter strings separated by spaces.")
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")