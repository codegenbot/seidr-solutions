from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    if not isinstance(values, list):
        raise ValueError("Expected a list of values")
    return [value for value in values if isinstance(value, int)]