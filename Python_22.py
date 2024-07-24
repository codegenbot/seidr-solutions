```
from typing import List, Any

def filter_integers(values: List[Any]) -> None:
    for value in values:
        if not isinstance(value, int):
            raise ValueError(f"Expected integer but received {value}")