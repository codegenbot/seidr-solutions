import numpy as np
def cut_vector(vec):
    n = len(vec)
    dp = np.zeros((n, n))
    for i in range(n):
        for j in range(i+1, n):
            if vec[j] - vec[i] == 0:
                dp[i][j] = 0
            else:
                dp[i][j] = min(dp[i][k-1] + dp[k+1][j-1], dp[i][j-1] + dp[j+1][k-1])
    return dp[0][n-1]
