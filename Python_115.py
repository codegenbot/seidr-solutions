Here is the completed code:

def max_fill(grid, capacity):
    water = sum(sum(1 for w in row if w) for row in grid)
    return math.ceil(water / capacity)