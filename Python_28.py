from typing import List


def concatenate(strings: List[str]):
    if not strings:
        return "Please provide some strings"
    return "".join(strings)


result = concatenate()
print(result)