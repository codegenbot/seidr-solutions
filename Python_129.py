def minPathSum(grid, k):
    N = len(grid)
    for i in range(N):
        for j in range(N):
            if i == 0 and j == 0:
                continue
            elif i == 0:
                grid[i][j] += grid[i][j - 1]
            elif j == 0:
                grid[i][j] += grid[i - 1][j]
            else:
                grid[i][j] += min(grid[i - 1][j], grid[i][j - 1])
    return sum(i for row in grid for i in row) - k * k