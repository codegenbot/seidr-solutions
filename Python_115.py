def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(row.count(1) for row in grid)
    if total_water % capacity != 0:
        return -1
    needed_fills = int(total_water / capacity)
    return needed_fills + (rows * cols // capacity - needed_fills)