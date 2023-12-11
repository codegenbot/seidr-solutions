def cut_vector(vec):
    n = len(vec)
    dp = [[0] * (n+1) for _ in range(n+1)]
    
    for i in range(1, n+1):
        for j in range(i+1, n+1):
            dp[i][j] = max(dp[i][k] + dp[k][j], vec[i-1] * (j - i + 1))
    
    return dp[n][n]
