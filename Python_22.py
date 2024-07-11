```
from typing import Any, List

def filter_integers(values: List[Any]) -> list:
    return [v for v in values if isinstance(v, int)]