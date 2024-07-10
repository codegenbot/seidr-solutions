def max_fill(grid, capacity):
    wells = [sum(row) for row in grid]
    max_wells = max(wells)
    return math.ceil(max_wells / capacity) * len(grid) - sum(
        math.ceil(well / capacity) for well in wells
    )