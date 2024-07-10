```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not strings:
        return []  # Return an empty list if input is empty
    return [s for s in strings if s.startswith(prefix)]