Here is the completed code:

def max_fill(grid, capacity):
    return sum((sum(row) // capacity) + (1 if sum(row) % capacity != 0 else 0) for row in grid)