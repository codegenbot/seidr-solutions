```Python
from typing import List, Any


def filter_integers(values: List[Any]) -> List[int]:
    if all(isinstance(value, int) for value in values):
        return [value for value in values if isinstance(value, int)]
    else:
        print("Program did not receive expected input")
        return []