```
from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    result = []
    for value in values:
        if isinstance(value, int):
            result.append(value)
        else:
            print(f"Error: Non-integer value {value} encountered.")
    return result