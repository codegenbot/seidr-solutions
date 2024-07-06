from typing import List
import typing

def filter_integers(values: List[typing.Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]