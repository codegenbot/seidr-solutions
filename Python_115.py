def max_fill(grid, capacity):
    max_fill = 0
    for row in grid:
        well_capacity = sum(row)
        max_fill += math.ceil(well_capacity / capacity)
    return max_fill