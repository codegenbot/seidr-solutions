```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float('inf')] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]
    for i in range(1, n):
        dp[i][0][0] = dp[i-1][0][0] + grid[i][0]
        dp[0][i][0] = dp[0][i-1][0] + grid[0][i]
    for i in range(n):
        for j in range(n):
            if i > 0:
                dp[i][j][0] = min(dp[i-1][j][0], dp[i][j-1][0]) + grid[i][j]
            else:
                dp[i][j][0] = dp[i][j-1][0] + grid[i][j]
    res = []
    i, j = n - 1, n - 1
    for _ in range(k):
        if i > 0 and j > 0:
            min_val = min(dp[i-1][j][0], dp[i][j-1][0])
        elif i > 0:
            min_val = dp[i-1][j][0]
        else:
            min_val = dp[i][j-1][0]
        if i > 0 and j > 0 and dp[i-1][j][0] == min_val:
            res.append(grid[i][j])
            i -= 1
        elif i > 0 and dp[i-1][j][0] == min_val:
            res.append(grid[i][j])
            i -= 1
        else:
            res.append(grid[i][j])
            j -= 1
    return res