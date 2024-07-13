Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    fill_times = -(-total_water // capacity)  # ceiling division
    return fill_times