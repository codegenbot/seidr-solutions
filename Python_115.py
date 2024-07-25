def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    result = math.ceil(total_water / capacity)
    return result