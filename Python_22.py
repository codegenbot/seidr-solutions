```
from typing import List, Any

def filter_integers(values: Any) -> List[int]:
    if not isinstance(values, list):
        return []
    return [value for value in values if isinstance(value, int)]