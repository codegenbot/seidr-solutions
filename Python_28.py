from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(sorted([s for s in strings if s]))