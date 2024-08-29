def fuel_cost(vector):
    import math
    return sum(math.floor(i / 3) - 2 for i in vector)