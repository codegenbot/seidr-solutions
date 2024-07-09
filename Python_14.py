```
from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        result += [prev + char for prev in result]
    return result