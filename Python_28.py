```
from typing import List


def concatenate() -> str:
    strings = input("Enter multiple strings separated by spaces: ").split()
    if not strings:
        return "Please provide some strings"
    return "".join(s for s in strings)