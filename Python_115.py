def max_fill(n, capacity_grid):
    rows = len(capacity_grid)
    cols = len(capacity_grid[0])
    total_water = rows * cols
    max_capacity = min(row[i] for i in range(cols))
    return math.ceil(total_water / (n * max_capacity))