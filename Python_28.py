```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if isinstance(s, str):
            result += s
    return result