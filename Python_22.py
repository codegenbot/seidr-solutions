from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    try:
        return [int(value) for value in values if isinstance(value, int)]
    except ValueError:
        return []