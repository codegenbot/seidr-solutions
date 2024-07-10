```
from typing import List
def all_prefixes(string: str) -> List[str]:
    result = []
    for length in range(1, len(string) + 1):
        result.append(string[:length])
    return result