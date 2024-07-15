def max_fill(grid, capacity):
    wells = [sum(row) for row in grid]
    max_wells = max(wells)
    return math.ceil(sum(wells) / capacity)