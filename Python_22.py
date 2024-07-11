from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    integer_values = []
    for value in values:
        if isinstance(value, int) and 1 <= value <= 100:
            integer_values.append(value)
    return integer_values