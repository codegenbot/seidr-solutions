import numpy as np

def fuel_cost(numbers):
    new_numbers = np.floor_divide(numbers, 3) - 2
    return np.sum(new_numbers)