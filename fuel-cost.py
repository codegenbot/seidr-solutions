```
from __future__ import division

def fuel_cost(vector):
    return sum((x - 2) // 3 for x in vector)
```