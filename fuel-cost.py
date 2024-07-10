```
def fuel_cost(arr):
    return sum((i-2)//3 - 2 for i in arr)