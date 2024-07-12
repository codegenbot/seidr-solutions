def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + len(grid) * len(grid[0]) * (capacity - 1)) // capacity
    remaining_capacity = max_water * capacity - total_water
    return max(remaining_capacity, 0)