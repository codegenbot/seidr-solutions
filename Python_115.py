def max_fill(grid, capacity):
    wells = [sum(row) for row in grid]
    max_well = max(wells)
    return math.ceil(max_well / capacity) * len(grid) - sum(wells)