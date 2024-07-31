Here is the solution:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    times = math.ceil(total_water / capacity)
    return times