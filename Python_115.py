Here is the solution:

def max_fill(grid, capacity):
    water = sum(sum(1 for x in row if x) for row in grid)
    return math.ceil(water / float(capacity))