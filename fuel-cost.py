```
from math import floor
def fuel_cost(vector):
    return sum([floor(x / 3) - 2 for x in vector])
```