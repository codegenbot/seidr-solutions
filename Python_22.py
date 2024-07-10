from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    filtered_values = [value for value in values if isinstance(value, int)]
    filtered_values.sort()
    return filtered_values