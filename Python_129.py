```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[[] for _ in range(k + 1)] for _ in range(n)] for _ in range(n)]

    for i in range(n):
        for j in range(n):
            if k == 0:
                dp[i][j][k] = [m[i][j]]
            else:
                for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
                    if 0 <= x < n and 0 <= y < n:
                        dp[i][j][k] = [m[x][y]] + min(dp[x][y][k - 1], default=[])
    return min(min(path, key=lambda x: (len(x), x)) for path in dp[0][0][k])