Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    times = -(-total_water // capacity)
    return times