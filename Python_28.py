```Python
from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        raise ValueError("Input is expected to be a list")
    return "".join(strings)