from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    result = [i*2 for i in values if isinstance(i, int)]
    return result