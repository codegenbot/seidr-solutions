from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if s.strip():
            result += s + " "
    return result.rstrip()