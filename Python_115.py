Here is the completed code:

def max_fill(grid, capacity):
    return sum(len([cell for cell in row if cell]) // capacity + (len([cell for cell in row if cell]) % capacity > 0) for row in grid)