from typing import List


def concatenate(strings: List[str]) -> str:
    "Return a concatenated string from input list of strings."
    return "".join([f'"{s}"' for s in strings])