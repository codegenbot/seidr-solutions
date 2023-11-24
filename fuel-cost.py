def fuel_cost(vector):
    return sum(x // 3 - 2 if x >= 8 else x // 3 - 1 for x in vector)