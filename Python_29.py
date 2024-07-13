```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not isinstance(strings, list):
        return "Error: Input should be a list of strings."
    if not all(isinstance(s, str) for s in strings):
        return "Error: All elements in the input list should be strings."
    return [s for s in strings if s.startswith(prefix)]