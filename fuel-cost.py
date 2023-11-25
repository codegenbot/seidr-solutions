import math

def fuel_cost(vector):
    return sum([math.floor(num/3) - 2 for num in vector])