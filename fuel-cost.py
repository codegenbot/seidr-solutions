def fuel_cost(vector):
    return sum((int(math.floor((x - 2) / 3)) if (x - 2) / 3 >= 0 else 0 for x in vector))