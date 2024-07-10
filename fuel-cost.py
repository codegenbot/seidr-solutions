def fuel_cost(arr):
    return sum((i-1)//3 - 2 for i in arr)