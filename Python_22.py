```
from typing import List


def filter_integers(lst: List) -> List[int]:
    return [value for value in lst if isinstance(value, int)]