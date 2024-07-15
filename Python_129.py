```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for i in range(n)] for j in range(n)]
    dp = [[[float('inf')] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = 0
    for i in range(1, k + 1):
        for x in range(n):
            for y in range(n):
                if i == 1:
                    dp[x][y][i] = m[x][y]
                else:
                    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < n and 0 <= ny < n:
                            dp[x][y][i] = min(dp[x][y][i], dp[nx][ny][i-1] + m[x][y])
    res = []
    x, y = 0, 0
    for i in range(k):
        res.append(m[x][y])
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                if dp[nx][ny][k-i-1] == dp[x][y][k-i]:
                    x, y = nx, ny
    res.append(m[x][y])
    return res