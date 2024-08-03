from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if s:
            result += s + " "
    return result.strip()