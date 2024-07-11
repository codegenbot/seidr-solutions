```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return 
    result = ""
    for s in strings:
        if not isinstance(s, str):
            raise ValueError("The input list must only contain strings")
        result += s
    return result