def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_per_lowering = capacity
    
    if total_water % water_per_lowering != 0:
        return -1
    else:
        return math.ceil(total_water / water_per_lowering)