import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)

# Sample test case
assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 4) == 2, "Error"