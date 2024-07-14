```
def fuel_cost(vector):
    return sum((i-1)//3-1 for i in vector)