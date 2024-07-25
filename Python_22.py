```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    if not isinstance(values, list):
        raise ValueError("Invalid input")
    try:
        return [value for value in values if isinstance(value, int)]
    except Exception as e:
        print(f"An error occurred: {e}")
        raise ValueError("Invalid input")