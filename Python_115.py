def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return min(
        (
            total_water // capacity + 1
            if total_water % capacity != 0
            else total_water // capacity
        ),
        len(grid),
    )