```
def fuel_cost(vector):
    return sum(min(i//3, (i//3)+1) - 2 for i in vector)