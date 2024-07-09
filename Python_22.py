from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    result = [value for value in values if isinstance(value, int) and (isinstance(value, float) or value % 1 == 0)]
    return result