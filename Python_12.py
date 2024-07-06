```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
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
            strings = list(map(str, input_str.split()))
            if not strings:  
                print("No valid input given. Please enter some strings.")
                continue
            return max(strings, key=len)
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")

    longest_strings = []
    while True:
        user_input = input("Enter a series of strings (space separated) or 'q' to quit: ")
        if user_input.lower() == 'q':
            break
        user_input = user_input.strip()
        if not user_input:
            print("No valid input given. Please enter some strings.")
            continue
        try:
            strings = list(map(str, user_input.split()))
            longest_strings.extend(strings)
        except ValueError:
            print("Invalid input. Please enter strings separated by spaces.")

    return max(longest_strings, key=len) if longest_strings else None