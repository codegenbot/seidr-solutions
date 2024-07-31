```Python
from typing import List

def concatenate(strings: List[str]) -> str:
    while True:
        user_input = input("Enter the strings separated by spaces (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            return ''
        try:
            return ''.join([s.strip() for s in user_input.split()])
        except ValueError:
            print("Invalid input. Please enter space-separated strings.")