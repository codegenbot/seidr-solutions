```
from typing import list

def all_prefixes(string: str) -> list:
    return [s for i in range(len(string) + 1) for s in (string[:i],)]