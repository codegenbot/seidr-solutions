```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "No strings were provided"
    else:
        return "".join(strings)