```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    strings = []
    while True:
        print("Please enter a series of strings (space separated) or 'q' to quit.")
        input_str = input()
        if input_str.lower() == 'q':
            break
        input_str = input_str.strip()  
        if not input_str:  
            print("No valid input given. Please enter some strings.")
            continue
        try:
            input_list = list(map(str, input_str.split()))
            strings.extend(input_list)
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")
    return max(strings, key=len) if strings else None