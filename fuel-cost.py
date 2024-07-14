def fuel_cost(vector):
    return sum((i // 3) - (i % 9) + 4 if i >= 9 else -1 for i in vector)