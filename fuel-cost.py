def fuel_cost(vector):
    return sum(max(0, i // 3 - 2) for i in vector)