import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)

# Example test
print(max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9))  # Output should be 2