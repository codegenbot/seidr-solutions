total_grid_water = sum(sum(row) for row in grid)
    max_capacity_fill = total_grid_water // capacity
    if total_grid_water % capacity != 0:
        max_capacity_fill += 1
    return max_capacity_fill