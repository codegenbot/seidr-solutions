def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    max_fills = math.ceil(total_water / float(capacity))
    return max_fills