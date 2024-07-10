```
from typing import list

def all_prefixes(string: str) -> list:
    return [string[:i] for i in range(len(string)+1)]