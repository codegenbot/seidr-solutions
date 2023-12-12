```
def fuel_cost(vector):
    from math import floor
    return sum([floor(x / 3) - 2 for x in vector])
```