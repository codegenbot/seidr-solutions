
```
def fuel_cost(vector):
    import math
    return sum([math.floor(x / 3) - 2 for x in vector])
```