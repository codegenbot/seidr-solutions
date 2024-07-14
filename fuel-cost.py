def fuel_cost(vector):
    return sum((i - i % 3) // 3 - 2 for i in vector)