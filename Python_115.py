def max_fill(grid, capacity):
    return sum(
        (grid[i].count(1) + (capacity - 1)) // capacity for i in range(len(grid))
    )