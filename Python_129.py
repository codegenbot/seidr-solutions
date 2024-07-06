```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float('inf')] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]
    for i in range(1, n):
        dp[i][0][0] = min(dp[i - 1][0][0], m[i][0])
    for j in range(1, n):
        dp[0][j][0] = min(dp[0][j - 1][0], m[0][j])
    for i in range(1, n):
        for j in range(1, n):
            if i == 0:
                dp[i][j][0] = min(dp[i][j - 1][0], m[i][j])
            elif j == 0:
                dp[i][j][0] = min(dp[i - 1][j][0], m[i][j])
            else:
                dp[i][j][0] = min(min(dp[i - 1][j][0], dp[i][j - 1][0]), m[i][j])
    path = []
    i, j = n - 1, n - 1
    for _ in range(k):
        if i > 0 and j > 0:
            if m[i - 1][j] < m[i][j - 1]:
                i -= 1
            else:
                j -= 1
        elif i > 0:
            i -= 1
        else:
            j -= 1
        path.append(m[i][j])
    return path