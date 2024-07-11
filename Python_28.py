```
from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(strings)
    elif isinstance(strings, str):
        return strings
    else:
        return "Error: Expected a list of strings"