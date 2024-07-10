def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = sum(1 for row in grid for _ in row if _)

    return math.ceil(water / float(capacity))