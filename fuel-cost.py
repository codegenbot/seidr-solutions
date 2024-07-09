def fuel_cost(vector):
    return sum(max(0, (i // 3) - 2) if i >= 10 else 0 for i in vector)