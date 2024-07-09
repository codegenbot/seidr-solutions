from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    result = [value for value in values if isinstance(value, int) and value > 10]
    return result