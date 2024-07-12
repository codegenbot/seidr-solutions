def max_fill(n, grid):
    total_water = sum(len(row) for row in grid)
    max_capacity = min(max(int(x) for row in grid for x in row))
    return math.ceil(total_water / (n * max_capacity))