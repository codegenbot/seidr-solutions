from typing import Any, List

def filter_integers(values: list) -> List[int]:
    return [value for value in values if isinstance(value, int)]