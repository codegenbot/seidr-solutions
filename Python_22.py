from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    if isinstance(values, list):
        return [x for x in values if isinstance(x, int)]
    else:
        return []