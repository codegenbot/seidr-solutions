from typing import List

def concatenate(strings: List[str]) -> str:
    user_input = input("Enter multiple strings separated by spaces: ")
    user_strings = user_input.split()
    return ''.join(user_strings)

print(concatenate([""]))