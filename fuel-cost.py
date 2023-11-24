def fuel_cost(vector):
    return sum([x // 3 - 2 if x >= 3 else x for x in vector])