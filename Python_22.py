```python
from typing import List

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]
```
OR

```python
def filter_integers(values: list) -> list:
    return [x for x in values if isinstance(x, int)]
```