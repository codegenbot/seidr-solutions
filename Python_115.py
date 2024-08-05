def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    excess_water = max(0, math.ceil(total_water / capacity) * capacity - total_water)
    return excess_water