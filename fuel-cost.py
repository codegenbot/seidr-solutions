def fuel_cost(vector):
    return sum(x // 3 - 2 if x >= 3 else x - 2 for x in vector)