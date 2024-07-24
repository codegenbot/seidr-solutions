```
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [str(string[:i])] for i in range(1, len(string) + 1)]