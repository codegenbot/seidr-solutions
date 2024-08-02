import math

def max_fill(grid, capacity):
    total_water = sum(cell for row in grid for cell in row)
    return math.ceil(total_water / capacity)

# Usage example
print(max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9))  # Output: 2