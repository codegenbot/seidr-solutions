from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    filtered_values = [value for value in values if isinstance(value, int)]
    sorted_values = sorted([int(i) for i in filtered_values])
    return sorted_values