from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if isinstance(string, str):
            result += string
    return result