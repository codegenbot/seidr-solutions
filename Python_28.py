from typing import List


def concatenate_strings() -> str:
    strings = input("Enter multiple strings separated by space: ").split()
    return "".join(strings)