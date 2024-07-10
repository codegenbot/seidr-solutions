def max_fill(grid, capacity):
    total = 0
    for row in grid:
        water_needed = sum(row) - capacity
        if water_needed > 0:
            total += math.ceil(water_needed / capacity)
    return total