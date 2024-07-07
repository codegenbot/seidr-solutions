def max_fill(grid, capacity):
    water = sum(sum(1 for _ in row if _) for row in grid)
    return math.ceil(water / float(capacity))