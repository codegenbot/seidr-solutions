from typing import List


def concatenate(strings: List[str]) -> str:
    if not all(isinstance(s, str) for s in strings):
        return "Invalid Input"
    else:
        return "".join(map(str, strings))