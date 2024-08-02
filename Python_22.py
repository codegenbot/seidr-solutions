```
from typing import List, Any

def filter_integers(values: list[Any]) -> list:
    return [value for value in values if isinstance(value, int)]