from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    input_values = input().split(',')
    print("Input received:", input_values)
    return [value for value in values if isinstance(value, int)]