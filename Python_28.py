from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    return "".join(s for s in strings if s)