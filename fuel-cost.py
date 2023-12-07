def fuel_cost(vector):
    return sum((int(round((x / 3) - 2)) for x in vector))