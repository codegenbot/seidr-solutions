```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    max_filled = 0
    curr_capacity = capacity
    
    for i in range(cols):
        for j in range(rows):
            if curr_capacity > 0 and grid[j][i] > 0:
                amount_to_fill = min(grid[j][i], curr_capacity)
                grid[j][i] -= amount_to_fill
                curr_capacity -= amount_to_fill
                max_filled += 1
    
    return math.ceil(total_water / capacity)