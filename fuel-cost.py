import numpy as np

def fuel_cost(nums):
    return np.floor_divide(nums, 3).sum() - 2 * len(nums)