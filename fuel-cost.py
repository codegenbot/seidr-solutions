def fuel_cost(vector):
    return sum([max(math.floor(i / 3) - 2, 0) for i in vector])