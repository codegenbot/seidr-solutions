Here is the solution:

def max_fill(grid, capacity):
    return sum(sum(1 + (c - 1) // capacity for c in row) for row in grid)