```
def fuel_cost(vector):
    return sum((i//3-2) if i//3 >= 2 else ((i+2)//3-1) for i in vector)