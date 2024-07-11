from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(s for s in strings if s)