
def max_fill(grid, capacity):
    count = 0
    for row in grid:
        water = sum(row)
        if water > 0:
            count += math.ceil(water / capacity)
    return count