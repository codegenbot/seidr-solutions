def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return total_water // capacity + int(total_water % capacity != 0)