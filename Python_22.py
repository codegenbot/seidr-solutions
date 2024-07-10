```python
from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    return [str(value) for value in values if isinstance(str(value), str)]