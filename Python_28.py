```
from typing import List

def concatenate(strings: List[str]) -> str:
    user_strings = []
    
    while True:
        try:
            user_input = input("Enter a list of strings separated by commas or 'q' to quit: ")
            if user_input.lower() == 'q':
                return ''.join(user_strings)
            user_strings = [s.strip() for s in user_input.split(',')]
            break
        except ValueError:
            print("Invalid input. Please enter a list of strings separated by commas.")
    return ''.join(user_strings)