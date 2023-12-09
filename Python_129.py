
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    dp = [[float('inf')] * (k+1) for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 1:
                dp[i][0] = 0
            elif grid[i][j] <= k:
                dp[i][grid[i][j]] = min(dp[i][grid[i][j]], dp[i-1][grid[i][j]-1] + 1)
    return [1] + [min(dp[-1][i], dp[-1][i-1]) for i in range(2, k+1)]