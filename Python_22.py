from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    filtered_values = []
    for value in values:
        if isinstance(value, int) and 1 <= value <= 100:
            filtered_values.append(value)
    return filtered_values