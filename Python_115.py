def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water

    while remaining_capacity > 0:
        for i in range(len(grid)):
            if remaining_capacity == 0:
                break
            distribute_per_row = remaining_capacity // len(grid)
            for j in range(len(grid[i])):
                add_water = min(remaining_capacity, distribute_per_row)
                grid[i][j] += add_water
                remaining_capacity -= add_water
    return grid