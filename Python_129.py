def minFallingSteps(grid):
    n = len(grid)
    dp = [[0]*n for _ in range(n)]
    dp[0][0] = grid[0][0]
    for i in range(1, n):
        dp[i][0] = dp[i-1][0] + 1
    for j in range(1, n):
        dp[0][j] = dp[0][j-1] + 1
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
    return dp[-1][-1]