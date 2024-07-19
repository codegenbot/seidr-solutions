def max_fill(grid, capacity):
    water = sum(row.count(1) for row in grid)
    return math.ceil(water / float(capacity))