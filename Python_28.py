```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "List is empty"
    return "".join(strings)