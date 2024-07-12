def max_fill(n, capacity_grid):
    total_water = sum(sum(row) for row in capacity_grid)
    max_capacity = min(min(sublist) for sublist in capacity_grid)
    return math.ceil(total_water / (n * max_capacity))