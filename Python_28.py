from typing import List


def concatenate(strings: List[str]) -> str:
    if not all(isinstance(s, str) for s in strings):
        return "Error: All inputs must be strings."
    result = ""
    for s in strings:
        result += s
    return result