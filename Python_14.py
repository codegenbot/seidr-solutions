```
from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    for i in range(len(string)):
        prefix = string[: i + 1]
        if len(prefix) > 1 or prefix == string:
            prefixes.append(prefix)
    return prefixes