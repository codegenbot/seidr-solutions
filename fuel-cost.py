```
import math
def fuel_cost(lst):
    return sum(math.floor(i/3) - 2 for i in lst)