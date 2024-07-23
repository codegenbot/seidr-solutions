from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        result += s
    return result