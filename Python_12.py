```Python
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    while True:
        try:
            input_str = input("Enter a series of strings (space separated) or 'exit' to quit: ")
            if input_str.lower() == "exit":
                break
            strings = list(map(str, input_str.split()))
            if strings:  
                return max(strings, key=len)
            else:
                print("No valid input given. Please enter some strings.")
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")