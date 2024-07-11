```
from typing import List


def concatenate(strings: List[str]):
    if not strings:
        return "Please provide some strings"
    return "".join(strings)


result = concatenate(input("Enter some strings (separated by space): ").split())
print(result)