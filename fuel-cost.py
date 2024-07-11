```
import math
def fuel_cost(arr):
    return sum(math.floor(x / 3) - 2 for x in arr)