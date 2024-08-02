def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    filled_capacity = total_water // capacity
    if total_water % capacity != 0:
        filled_capacity += 1
    return filled_capacity