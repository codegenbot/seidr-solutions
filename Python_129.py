def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    dp = [[float("inf") for _ in range(m)] for _ in range(n)]
    dp[0][0] = 0
    for i in range(1, k):
        for j in range(n):
            for l in range(m):
                if grid[j][l] == i:
                    dp[j][l] = min(dp[j][l], dp[j - 1][l] + dp[j][l - 1])
    return [grid[i // m][i % m] for i in range(k)]