```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not isinstance(strings, list):
        return 
    for s in strings:
        if not isinstance(s, str):
            return 
    return [s for s in strings if s.startswith(prefix)]