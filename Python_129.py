def minPathSum(grid):
    n = len(grid)
    m = len(grid[0])
    dp = [[0] * (m+1) for _ in range(n+1)]
    
    for i in range(1, n+1):
        for j in range(1, m+1):
            if grid[i-1][j-1] == 0:
                dp[i][j] = min(dp[i-1][j], dp[i][j-1])
            else:
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1])
                
    return dp[n][m]