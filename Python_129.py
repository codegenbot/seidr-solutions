def minPath(grid, k):
    N = len(grid)
    dp = [[0] * (N + 1) for _ in range(k)]
    for i in range(k):
        for j in range(N):
            dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + grid[i][j]
    return [dp[k - 1][j] for j in range(N)]