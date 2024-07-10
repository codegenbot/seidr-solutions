```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not strings:
        return []
    return [s for s in strings if s.startswith(prefix)]