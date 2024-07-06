def fuel_cost(vector):
    return sum((i//3) - 2 for i in vector)

fuel_cost([1,2,3,4,5])