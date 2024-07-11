from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    try:
        return [value if isinstance(value, int) else None for value in values]
    except TypeError:
        return []