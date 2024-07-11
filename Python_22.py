```
from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    return [value for value in values if isinstance(value, int)]

integers = [1, 2, 3]
print(filter_integers(integers))