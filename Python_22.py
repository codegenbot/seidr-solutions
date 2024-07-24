Here is the modified code:
```
from typing import List, Any
import sys

values = list(map(int, sys.stdin.read().strip().split()))

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

print(filter_integers(values))