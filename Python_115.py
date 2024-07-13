Here is the solution:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    wells = len(grid[0])
    return math.ceil(total_water / (capacity * wells))