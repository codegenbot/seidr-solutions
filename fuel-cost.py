```
from math import floor

def fuel_cost(input_vector):
    return sum(floor(i / 3) - 2 for i in input_vector)