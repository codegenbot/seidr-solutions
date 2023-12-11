import numpy as np

def fuel_cost(vector):
    return np.sum(np.floor(vector / 3) - 2)