from typing import List


def concatenate() -> str:
    user_input = input("Enter a list of strings separated by commas: ")
    strings = [s.strip() for s in user_input.split(",")]
    return "".join(map(str, strings))