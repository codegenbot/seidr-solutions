from typing import Any, List

def filter_integers(values: List[Any]) -> list:
    return [value for value in values if isinstance(value, int)]