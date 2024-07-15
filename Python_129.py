def minPath(grid, k):
    n = len(grid)
    idx = min(range(n), key=lambda x: grid[x // n][x % n])
    return [grid[idx // n][idx % n]] * k