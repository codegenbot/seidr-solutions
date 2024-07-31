from typing import List

def concatenate(strings: List[str]) -> str:
    user_input = input("Enter the strings separated by spaces: ")
    while True:
        try:
            return ''.join([s.strip() for s in user_input.split()])
        except ValueError:
            print("Invalid input. Please enter space-separated strings.")