from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Invalid input. Please enter a list of strings."
    result = ""
    for s in strings:
        result += s
    return result