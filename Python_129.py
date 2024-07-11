```
def minPath(grid, k):
    n = len(grid)
    dp = [[float('inf')] * (k + 1) for _ in range(n)]
    dp[0][0] = grid[0][0]
    for i in range(1, n):
        dp[i][0] = min(dp[i-1][0], grid[i][0])
    for j in range(1, n):
        dp[0][j] = min(dp[0][j-1], grid[0][j])
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), grid[i][j])
    path = []
    i, j = 0, 0
    for _ in range(k):
        path.append(grid[i][j])
        if dp[i][j] == dp[i-1][j] + grid[i][j]:
            i -= 1
        elif dp[i][j] == dp[i][j-1] + grid[i][j]:
            j -= 1
        else:
            if i > 0 and j < n - 1:
                if dp[i][j+1] < dp[i+1][j]:
                    j += 1
                else:
                    i += 1
            elif i > 0:
                i += 1
            else:
                j += 1
    return path