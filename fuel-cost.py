def fuel_cost(vec):
    return sum([round(x / 3) - 2 for x in vec]) + len(vec) * 2