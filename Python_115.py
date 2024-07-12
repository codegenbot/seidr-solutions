def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water
    
    for row in grid:
        for i in range(len(row)):
            if remaining_capacity > 0:
                row[i] += min(remaining_capacity, capacity - row[i])
                remaining_capacity -= min(remaining_capacity, capacity - row[i])
    
    return grid