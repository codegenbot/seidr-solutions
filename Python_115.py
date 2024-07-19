def max_fill(grid, capacity):
    total_water = 0
    num_buckets = 0
    
    for row in grid:
        well_water = sum(row)
        total_water += well_water
        
        while well_water > 0:
            well_water -= min(well_water, capacity)
            num_buckets += 1
    
    return total_water - num_buckets * capacity