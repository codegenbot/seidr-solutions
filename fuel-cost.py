def fuel_cost(vector):
    return sum([x // 3 - 2 if x >= 2 else x // 3 - 2 for x in vector])