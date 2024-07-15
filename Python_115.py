Here is the completed code:

def max_fill(grid, capacity):
    return sum((sum(1 for cell in row if cell) + capacity - 1) // capacity for row in grid)