```
import math
def fuel_cost(arr):
    return sum(math.floor(i / 3) for i in arr) - len(arr) * 2