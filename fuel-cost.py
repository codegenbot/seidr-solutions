```
def fuel_cost(vector):
    return sum(math.floor(i/3) for i in vector) - len(vector)*2