def fuel_cost(vector):
    return sum((i // (i//3*3)+1) - 2 for i in vector)