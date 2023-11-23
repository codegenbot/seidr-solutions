from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [val for val in values if isinstance(val, int)]