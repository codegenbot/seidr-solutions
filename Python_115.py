import numpy as np

def max_fill(grid, capacity):
    total_water = np.sum(grid)
    return int(np.ceil(total_water / capacity))