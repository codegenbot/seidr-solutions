import math
def fuel_cost(vector_input):
    vector = [int(x) for x in vector_input.split()]
    return sum([math.floor(x/3) - 2 for x in vector])