def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water
    
    for row in grid:
        for i in range(len(row)):
            desired_water = total_water / len([cell for row in grid for cell in row]) * capacity
            target_water = max(row[i], desired_water)
            additional_water = min(remaining_capacity, target_water - row[i])
            row[i] += additional_water
            remaining_capacity -= additional_water
    
    return grid