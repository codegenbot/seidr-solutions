from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    filtered_values = [value for value in values if isinstance(value, int)]
    return filtered_values