```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[Any]:
    return [value for value in values if isinstance(value, int)]