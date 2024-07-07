def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float("inf")] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]
    for i in range(1, n):
        dp[i][0][0] = min(dp[i - 1][0][0], m[i][0])
    for j in range(1, n):
        dp[0][j][0] = min(dp[0][j - 1][0], m[0][j])
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j][0] = min(min(dp[i - 1][j][0], dp[i][j - 1][0]), m[i][j])
    for i in range(n):
        for j in range(k + 1):
            if dp[i][j][k] == float("inf"):
                continue
            for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                ni, nj = i + x, j + y
                if 0 <= ni < n and 0 <= nj < k + 1:
                    dp[ni][nj][k] = min(dp[ni][nj][k], dp[i][j][k - 1] + m[ni][nj])
    path = []
    i, j = n - 1, k
    while j > 0:
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if (
                0 <= ni < n
                and 0 <= nj < k + 1
                and dp[ni][nj][k - 1] == dp[i][j][k - 1] - m[ni][nj]
            ):
                path.append(m[ni][nj])
                i, j = ni, nj
                break
    return path[::-1]