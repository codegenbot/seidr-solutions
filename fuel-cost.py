def fuel_cost(vector):
    return sum((i // 3) + ((i % 3) > 0) - 2 for i in vector)