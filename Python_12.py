```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    while True:
        print("Please enter a series of strings (space separated) or 'q' to quit.")
        try:
            input_str = input()
            if input_str.lower() == 'q':
                break
            strings = list(map(str, input_str.split()))
            if strings:  
                return max(strings, key=len)
            else:
                print("No valid input given. Please enter some strings.")
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")