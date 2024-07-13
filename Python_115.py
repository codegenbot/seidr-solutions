def max_fill(grid, capacity):
    return sum((math.ceil(len(well) / capacity)) for well in grid)