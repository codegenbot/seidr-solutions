def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    water_per_cycle = min(capacity, total_water)
    cycles = math.ceil(total_water / water_per_cycle)
    return cycles