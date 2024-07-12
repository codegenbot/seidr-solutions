def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water
    remaining_capacity_per_cell = remaining_capacity // len(grid[0])
    return max(remaining_capacity_per_cell, 0)