import math

def fuel_cost(vector):
    vector = [int(x) for x in vector]
    return sum([math.floor(x/3) - 2 for x in vector])