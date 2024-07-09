```
from typing import List


def concatenate():
    strings = input("Enter multiple strings separated by space: ").split()
    return "".join(strings)