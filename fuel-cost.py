```
def fuel_cost(vector):
    return sum((i - 1) // 3 * 4 - 8 for i in vector)