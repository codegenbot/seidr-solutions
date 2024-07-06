```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not isinstance(strings, list):
        return "Invalid input type. Please provide a list of strings."
    for s in strings:
        if not isinstance(s, str):
            return "Invalid input type. The list must only contain strings."

    return [s for s in strings if s.startswith(prefix)]