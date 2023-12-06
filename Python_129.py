def minPath(grid, k):
    N = len(grid)
    dp = [[0] * (N + 1) for _ in range(k)]
    for i in range(k):
        dp[i][0] = grid[0][0]
    for i in range(1, k):
        for j in range(1, N + 1):
            dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j]) + grid[i][j]
    return [dp[k - 1][j] for j in range(N)]