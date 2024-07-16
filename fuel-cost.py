```
def fuel_cost(vector):
    return sum(int(round(i / 3)) - 2 for i in vector)