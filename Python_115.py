import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)

    remaining_capacity = capacity - total_water
    if remaining_capacity <= 0:
        return 0

    additional_water_needed = sum(len(row) - max(row) for row in grid)
    
    return math.ceil((remaining_capacity + additional_water_needed) / len(grid[0]))