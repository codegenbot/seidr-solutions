def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water % capacity != 0:
        return -1

    max_times = total_water // capacity
    remaining_water = total_water % capacity

    times = 0
    while remaining_water > 0:
        times += 1
        remaining_water -= capacity

        for row in grid:
            if sum(row) > 0 and row[0] == 1:
                remaining_water -= min(remaining_water, len(row))
                row[:] = [0] * len(row)

    return max_times + times