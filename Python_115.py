def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    times_to_lower = math.ceil(total_water / capacity)
    return int(times_to_lower)