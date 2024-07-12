def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float("inf")] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = 0
    for i in range(1, k + 1):
        for x in range(n):
            for y in range(n):
                if i > 1:
                    dp[x][y][i] = (
                        min(
                            dp[(x - 1) % n][y][i - 1],
                            dp[(x + 1) % n][y][i - 1],
                            dp[x][(y - 1) % n][i - 1],
                            dp[x][(y + 1) % n][i - 1],
                        )
                        + m[x][y]
                    )
                else:
                    dp[x][y][i] = m[x][y]
    res = []
    x, y = 0, 0
    for _ in range(k):
        res.append(m[x][y])
        if x == 0 and y == n - 1:
            return res
        if dp[(x + 1) % n][y][k - 1] < dp[x][(y + 1) % n][k - 1]:
            x = (x + 1) % n
        else:
            y = (y + 1) % n
    return res