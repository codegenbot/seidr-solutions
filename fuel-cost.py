def fuel_cost(vector):
    return sum([x // 3 - 2 if x >= 8 else 0 for x in vector])