```
from typing import List


def all_prefixes_and_suffixes(string: str) -> List[str]:
    result = []
    for i in range(len(string) + 1):
        result.append(string[:i])
    if len(string) > 0:
        for i in range(len(string), -1, -1):
            result.append(string[i:])
    return [prefix for prefix in set(result)]  # remove duplicates