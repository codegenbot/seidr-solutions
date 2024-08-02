def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        water_in_row = min(row) * len(row)
        if water_in_row % capacity != 0:
            return -1
        total_water += math.ceil(water_in_row / capacity)
    return total_water