from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    try:
        return [value for value in values if isinstance(value, int)]
    except TypeError:
        return []