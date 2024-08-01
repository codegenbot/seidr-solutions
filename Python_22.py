```
from typing import List, Any

def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]