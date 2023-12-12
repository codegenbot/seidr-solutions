
def fuel_cost(vector):
    return sum((x-2)//3 for x in vector if (x-2)//3>=0 else 0)