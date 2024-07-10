```
def fuel_cost(arr):
    return sum((i - (i % 3)) // 3 - 2 for i in arr)