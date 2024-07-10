def max_fill(grid, capacity):
    wells_filled = 0
    for row in grid:
        water_level = sum(row)
        wells_filled += math.ceil(water_level / capacity)
    return wells_filled