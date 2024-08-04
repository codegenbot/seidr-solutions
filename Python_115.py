def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    excess_water = total_water - capacity
    return max(0, -(-excess_water // capacity))