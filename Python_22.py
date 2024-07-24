```
from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]