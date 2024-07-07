Here is the completed code:

def max_fill(grid, capacity):
    return sum(max(0, math.ceil(sum(row) / capacity)) for row in grid)