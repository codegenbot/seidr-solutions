Here is the completed code:

def max_fill(grid, capacity):
    max_rows = len(grid)
    total_water = sum(sum(row) for row in grid)
    needed_lowerings = -(-total_water // capacity)  # equivalent to math.ceil(total_water / capacity)
    
    return needed_lowerings