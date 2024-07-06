import typing
from typing import List

def filter_integers(values: List[typing.Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]