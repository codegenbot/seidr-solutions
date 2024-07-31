from typing import List

def concatenate(strings: List[str]) -> str:
    user_input = input("Enter the strings separated by spaces: ")
    strings = [s.strip() for s in user_input.split()]
    return ''.join(strings)