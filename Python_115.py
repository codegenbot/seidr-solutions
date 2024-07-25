```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    
    for i in range(cols):
        for j in range(rows):
            if grid[j][i] > 0:
                amount_to_fill = min(grid[j][i], capacity)
                grid[j][i] -= amount_to_fill
                capacity -= amount_to_fill
    
    return total_water / capacity