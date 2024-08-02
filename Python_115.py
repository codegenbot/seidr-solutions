Here is the completed code:

def max_fill(grid, capacity):
    water = sum(sum(row) for row in grid)
    return math.ceil(water / float(capacity))