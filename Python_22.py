from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    filtered_values = [value for value in values if isinstance(value, int)]
    doubled_filtered_values = [i * 2 for i in filtered_values]
    return doubled_filtered_values