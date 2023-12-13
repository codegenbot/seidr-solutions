def fuel_cost(arr):
    return sum([max(0, i // 3 - 2) for i in arr])