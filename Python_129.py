def minPath(grid, k, n):
    dp = [[float("inf") for _ in range(n)] for _ in range(k)]
    dp[0][0] = grid[0][0]
    for i in range(1, k):
        for j in range(n):
            if i == 0 and j == 0:
                continue
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j]
    return dp[-1][-1]