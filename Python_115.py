def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_left = total_water
    fill_times = 0
    
    while water_left > 0:
        fill_times += math.ceil(water_left / capacity)
        water_left %= capacity
    
    return fill_times