from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return ""
    result = ""
    for s in strings:
        if not isinstance(s, str):
            return 
        result += s
    return result