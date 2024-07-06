def max_fill(grid, capacity):
    rows = [list(map(int, row.split())) for row in grid.split("\n")]
    total_water = sum(sum(row) for row in rows)
    return math.ceil(total_water / capacity)