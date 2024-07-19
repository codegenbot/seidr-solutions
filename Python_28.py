from typing import List


def concatenate(strings: List[str]) -> str:
    user_input = input("Enter strings separated by space: ")
    strings = [string.strip() for string in user_input.split()]
    return "".join(strings)