```Python
from typing import List


def all_prefixes(string: str) -> List[str]:
    result = ['']  
    for i in range(len(string) + 1):
        prefix = string[:i]
        if len(prefix) > 0:
            result.append(prefix)
    return result