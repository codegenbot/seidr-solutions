```
from typing import Any

def filter_integers(values) -> list:
    return [value for value in values if isinstance(value, int)]