def minPath(grid):
    n = len(grid)
    res = []
    min_val = float("inf")
    for i in range(n - 1):
        for j in range(n - 1):
            total = grid[i][j] + grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1]
            if total < min_val:
                min_val = total
                res = [(i, j), (i, j + 1), (i + 1, j), (i + 1, j + 1)]
    return [
        [grid[x][y] for x in range(i - 1, i) for y in range(j - 1, j + 1)]
        for i, j in res
    ]