def max_fill(grid, capacity):
    total = 0
    for row in grid:
        for well in row:
            if well > capacity:
                total += math.ceil(well / capacity)
    return total