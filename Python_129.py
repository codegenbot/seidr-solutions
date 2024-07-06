def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    dp = [[float("inf") for _ in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 1:
                dp[i][j] = 0
    for i in range(n):
        for j in range(m):
            if dp[i][j] != float("inf"):
                for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
                    if 0 <= x < n and 0 <= y < m and dp[x][y] != float("inf"):
                        dp[i][j] = min(dp[i][j], dp[x][y] + 1)
    return [grid[i // n][i % m] for i in range(k)]