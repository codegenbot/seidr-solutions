```
from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    if not isinstance(values, list):
        raise ValueError("Input must be a list")
    return [value for value in values if isinstance(value, int)]