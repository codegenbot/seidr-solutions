def minPath(grid, k):
    n = len(grid)
    flattened_grid = [elem for row in grid for elem in row]
    idx = min(range(n * n), key=lambda x: flattened_grid[x])
    return [flattened_grid[idx]] * k