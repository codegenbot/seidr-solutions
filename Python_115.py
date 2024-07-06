```
def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(cell for cell in row)
    
    return math.ceil((total_water + capacity - 1) / float(capacity))