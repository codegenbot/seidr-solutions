```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    for s in strings:
        if not isinstance(s, str):
            return "Error: Input contains non-string values"
    return "".join(map(str, strings))