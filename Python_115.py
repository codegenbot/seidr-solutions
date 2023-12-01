def max_fill(grid, capacity):
    num_fill = 0
    for row in grid:
        for well in row:
            num_fill += math.ceil(well / capacity)
    return num_fill