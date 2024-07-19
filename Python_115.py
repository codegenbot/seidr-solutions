def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    times_to_lower = total_water // capacity
    if total_water % capacity != 0:
        times_to_lower += 1
    return times_to_lower * len(grid[0]) - total_water