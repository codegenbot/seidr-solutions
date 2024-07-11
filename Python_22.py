```
from typing import list, any

def filter_integers(values: list[any]) -> list[int]:
    return [value for value in values if isinstance(value, int)]