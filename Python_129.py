def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    dp = [[float("inf") for _ in range(m)] for _ in range(n)]
    dp[0][0] = grid[0][0]

    for i in range(1, n):
        for j in range(m):
            if i == 0 and j == 0:
                continue
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j]

    return dp[-1][-1]