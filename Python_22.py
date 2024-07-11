```
from typing import Any, List

def filter_integers(values: List[Any]) -> List[int]:
    if not isinstance(values, list):
        raise ValueError("Input must be a list")
    return [value for value in values if isinstance(value, int)]