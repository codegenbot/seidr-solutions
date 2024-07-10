def fuel_cost(arr):
    return sum((j+2-1)//3 - 2 for j in arr)