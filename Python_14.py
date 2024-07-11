```
from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    if len(string) == 0:
        return [""]  
    for i in range(1, len(string) + 1):
        result.append(string[:i])
    return result