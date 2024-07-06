from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    while True:
        try:
            user_input = input("Enter a series of strings (space separated): ")
            strings = list(map(str, user_input.split()))
            if strings:  
                return max(strings, key=len)
            break  
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")