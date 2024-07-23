def fuel_cost(vector):
    return sum(i-2 for i in (j//3 for j in vector))