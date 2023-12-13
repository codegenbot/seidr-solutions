def fuel_cost(vector):
    return sum(map(lambda x: int(x)//3 - 2, vector))