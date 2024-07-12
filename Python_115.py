def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water

    if remaining_capacity == 0:
        return grid

    for i in range(remaining_capacity):
        grid[i % len(grid)][i % len(grid[0])] += 1

    return grid