def fuel_cost(vector):
    return sum(max((i-2)//3,0) for i in vector)