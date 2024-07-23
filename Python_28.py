from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = "".join(strings)
    return result