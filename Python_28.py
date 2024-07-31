from typing import List

def concatenate(strings: List[str]) -> str:
    while True:
        user_input = input("Enter the strings separated by spaces: ")
        user_strings = user_input.split()
        if all(s for s in user_strings):  
            return ''.join([s.strip() for s in user_strings])
        print("Invalid input. Please enter non-empty space-separated strings.")