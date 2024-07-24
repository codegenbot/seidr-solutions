```
from typing import List, Any


def filter_integers(lst: List[Any]) -> List[int]:
    return [value for value in lst if isinstance(value, int)]