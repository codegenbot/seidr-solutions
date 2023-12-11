def fuel_cost(vector):
    return sum([math.floor((x - 2) / 3) for x in vector])