from typing import List

def filter_integers(values: list) -> List[int]:
    return [x for x in values if isinstance(x, int)]