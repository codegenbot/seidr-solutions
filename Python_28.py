```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return "No strings provided."
    else:
        return "".join(strings)