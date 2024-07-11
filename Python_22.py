from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    print("Input received:", values)
    return [value for value in values if isinstance(value, int)]