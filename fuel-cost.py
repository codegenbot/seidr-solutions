import math

def fuel_cost(vector):
    return sum([int(math.floor(x/3)) - 2 for x in vector])