def fuel_cost(vec):
    import math
    return sum([math.floor(x / 3) - 2 for x in vec]) + len(vec) * 2