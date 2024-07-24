def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_cycles = 0
    remaining_water = total_water
    
    while remaining_water > 0:
        fill_amount = min(remaining_water, capacity)
        remaining_water -= fill_amount
        max_cycles += 1
    
    return max_cycles