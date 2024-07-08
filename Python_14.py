```
from typing import List


def all_prefixes_and_suffixes(string: str) -> List[str]:
    result = []
    for i in range(len(string) + 1):
        for j in range(i, len(string)):
            result.append(string[:j + 1])
    for i in range(len(string), -1, -1):
        for j in range(len(string), i, -1):
            result.append(string[j:])
    return result