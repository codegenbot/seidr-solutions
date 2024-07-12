def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    water_per_cycle = min(m, capacity)
    cycles = math.ceil(total_water / water_per_cycle)
    return int(cycles * (m + 1))