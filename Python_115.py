def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(cell for row in grid for cell in row if cell > 0)

    filled_buckets = 0
    remaining_capacity = capacity

    for i in range(cols):
        for j in range(rows):
            if grid[j][i] > 0 and grid[j][i] <= remaining_capacity:
                amount_to_fill = min(grid[j][i], remaining_capacity)
                grid[j][i] -= amount_to_fill
                filled_buckets += 1
                remaining_capacity -= amount_to_fill

    return math.ceil(total_water / (capacity + rows * cols - total_water))