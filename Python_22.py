from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    try:
        return [x for x in values if isinstance(x, int)]
    except:
        return []