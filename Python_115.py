def max_fill(grid, capacity):
    required_movements = 0
    for row in grid:
        water_level = sum(row)
        while water_level > 0:
            water_level -= min(capacity, water_level)
            required_movements += 1
    return required_movements