```
from typing import List

def all_prefixes(string: str) -> List[str]:
    if len(string) == 0:
        return ['']
    elif len(string) == 1:
        return [string]
    else:
        result = []
        for i in range(1, len(string) + 1):
            result.append(string[:i])
        return result