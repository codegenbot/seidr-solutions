from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Invalid input"
    if any(not isinstance(s, str) for s in strings):
        return "Invalid input"
    if not strings:
        return ""
    return "".join(strings)