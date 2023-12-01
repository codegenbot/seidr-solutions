from typing import List, Any


def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]