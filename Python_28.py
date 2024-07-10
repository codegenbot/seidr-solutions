from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Error: Input must be a list of strings."
    result = ""
    for s in strings:
        result += s
    return result