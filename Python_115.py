def max_fill(grid, capacity):
    total_water = sum(sum(1 for x in row if x < capacity) for row in grid)
    return -(-total_water // capacity)