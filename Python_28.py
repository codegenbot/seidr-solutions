from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "No strings to concatenate"
    result = "".join(s for s in strings if isinstance(s, str))
    return result