def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water

    row_count = len(grid)
    col_count = len(grid[0])

    fill_per_cell = remaining_capacity // (row_count * col_count)
    remaining_capacity %= (row_count * col_count)

    for row in grid:
        for i in range(len(row)):
            remaining_water = min(remaining_capacity, fill_per_cell)
            row[i] += remaining_water
            remaining_capacity -= remaining_water

    return grid