```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Error: Input must be a list of strings."
    result = ""
    for s in strings:
        if not isinstance(s, str):
            return f"Error: All elements in the list must be strings. '{s}' is not a string."
        result += s
    return result