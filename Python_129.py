```
def minPath(grid, k):
    return sorted([val for row in grid for val in row])[:k]