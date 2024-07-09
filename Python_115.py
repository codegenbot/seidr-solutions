import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    remaining_water = total_water % capacity
    if remaining_water == 0:
        return 0
    return math.ceil(total_water / capacity) * len(grid[0]) - total_water // len(grid[0])