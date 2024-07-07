Here is the solution:

def max_fill(grid, capacity):
    max_water = sum(1 for row in grid if any(cell == 1 for cell in row))
    return math.ceil(max_water / float(capacity))