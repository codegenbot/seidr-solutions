from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    try:
        return "".join(map(str, strings))
    except TypeError:
        return "Invalid input. Only strings are allowed."