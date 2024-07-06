```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    while True:
        try:
            strings = list(map(str, input("Enter a series of strings (space separated): ").split()))
            if strings:  
                return max(strings, key=len)
            break  
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")