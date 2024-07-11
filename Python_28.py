```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "Please provide some strings"
    return "".join(s for s in strings)