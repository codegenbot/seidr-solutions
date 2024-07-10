def fuel_cost(vector):
    return sum((i//3-2) if i//3 > 1 else min(i//3,1)-2 for i in vector)