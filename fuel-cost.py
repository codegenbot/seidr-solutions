def fuel_cost(vector):
    return sum([max(int(i / 3) - 2, 0) for i in vector])