def minPathSum(m):
    n = len(m)
    dp = [[0]*n for _ in range(n)]
    
    for i in range(n):
        dp[i][0] = m[i][0]
    for j in range(1,n):
        dp[0][j] = dp[0][j-1]+m[0][j]
        
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + m[i][j]
            
    return dp[-1][-1]