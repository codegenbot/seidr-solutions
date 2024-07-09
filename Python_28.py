```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list) or not all(isinstance(s, str) for s in strings):
        raise ValueError("Expected a list of strings")
    result = ""
    for string in strings:
        result += string
    return result