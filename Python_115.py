def max_fill(n, grid):
    total_water = len([row for row in grid])
    max_capacity = min(max(row) for row in grid)
    return math.ceil(total_water / (n * max_capacity))