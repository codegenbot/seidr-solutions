def max_fill(grid, capacity):
    excess_water = sum(max(cell - capacity, 0) for row in grid for cell in row)
    return math.ceil(excess_water / capacity)