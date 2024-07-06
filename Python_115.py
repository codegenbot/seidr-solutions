```Python
def max_fill(grid, capacity):
    return sum(min(len(row), capacity) for row in grid)