"""
Given a grid of water pipes with varying capacities and a target capacity, find the maximum number of times the target capacity can be filled by taking the maximum amount from each pipe.

The function takes as input a grid where each row represents a pipe's capacity and a target capacity. It should return the maximum number of times the target capacity can be filled.

"""
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))