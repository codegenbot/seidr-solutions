```
import math
def fuel_cost(vec):
    return sum([math.floor(x / 3) - 2 for x in vec if x > 0]) + len(vec) * 2
```