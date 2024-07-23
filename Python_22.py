from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    try:
        return [value for value in values if isinstance(value, int)]
    except TypeError:
        return []