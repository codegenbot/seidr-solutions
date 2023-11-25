import numpy as np

def fuel_cost(vector):
    return np.sum(np.floor_divide(vector, 3) - 2)