def fuel_cost(vector):
    return sum(i // 3 - 2 if i >= 3 else 0 for i in vector)