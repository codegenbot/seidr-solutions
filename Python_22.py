from typing import Any, List

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]