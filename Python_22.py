from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    filtered_values = [value for value in values if isinstance(value, int)]
    return [x for x in filtered_values if x % 2 == 0]