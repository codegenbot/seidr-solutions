import numpy as np

def fuel_cost(numbers):
    return np.sum(np.floor_divide(numbers, 3) - 2)