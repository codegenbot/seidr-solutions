```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "Please provide valid input"
    return "".join(strings)