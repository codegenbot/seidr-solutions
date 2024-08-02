def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    filled_containers = 0
    while total_water > 0:
        container_filled = min(capacity, total_water)
        total_water -= container_filled
        filled_containers += 1
    return -(-filled_containers // 1)