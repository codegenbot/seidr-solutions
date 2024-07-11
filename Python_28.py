from typing import List


def concatenate() -> str:
    strings = input("Enter the list of strings (separated by space): ").split()
    return "".join(strings)