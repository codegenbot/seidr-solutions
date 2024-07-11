```
from typing import Any, list

def filter_integers(values: list[Any]) -> list[int]:
    return [value for value in map(eval, input("Enter a list of numbers separated by comma or space: ").split(',')) if isinstance(value, int)]

filter_integers([])