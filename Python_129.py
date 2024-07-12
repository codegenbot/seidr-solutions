def minPath(grid, k):
    n = len(grid)
    row, col = divmod(k - 1, n - 1)
    if row % 2 == 0:
        return [grid[row][col], grid[row][col + 1], grid[row][col]]
    else:
        return [grid[row][n - 1 - col], grid[row][n - 2 - col], grid[row][n - 1 - col]]