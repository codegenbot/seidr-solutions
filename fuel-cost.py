def fuel_cost(vector):
    return sum(divmod(i, 3)[0] - 2 for i in vector)