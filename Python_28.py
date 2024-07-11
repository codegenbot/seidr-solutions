from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        strings = []
    result = ""
    for s in strings:
        if not isinstance(s, str):
            continue
        result += s
    return result