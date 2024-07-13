```
def fuel_cost(vector):
    return sum((i-1)//3*4-2 for i in vector)