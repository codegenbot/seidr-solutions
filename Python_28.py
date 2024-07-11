```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "Please provide some strings"
    result = ""
    for s in strings:
        if isinstance(s, str) and s:
            result += s
        else:
            return "Please provide valid strings"
    return result