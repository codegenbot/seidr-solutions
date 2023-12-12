def fuel_cost(vector):
    return sum([((x-2)//3) if x > 2 else 0 for x in vector])