```
from typing import List


def concatenate():
    strings = input("Please provide some strings (separated by spaces): ").split()
    if not strings:
        return "Please provide some strings"
    result = "".join(strings)
    return result


result = concatenate()
print(result)