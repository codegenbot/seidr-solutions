```
def fuel_cost(arr):
    import math
    return sum(math.floor(i // 3) - 2 for i in arr)