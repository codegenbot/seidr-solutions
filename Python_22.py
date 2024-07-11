```
from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    values = [1, 2, "a", 3.0, True]
    result = filter_integers(values)
    print(result)