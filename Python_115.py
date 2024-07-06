Here is the completed code:

def max_fill(grid, capacity):
    return sum(math.ceil(sum(row) / capacity) for row in grid)