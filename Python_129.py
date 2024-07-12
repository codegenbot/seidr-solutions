```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float('inf')] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]
    for i in range(1, n):
        dp[i][0][0] = min(dp[i-1][0][0], m[i][0])
        for j in range(1, n):
            dp[j][0][0] = min(dp[j-1][0][0], m[j][0])
    for i in range(n):
        for j in range(n):
            if i > 0:
                dp[i][j][0] = min(dp[i-1][j][0], m[i][j])
            if j > 0:
                dp[i][j][0] = min(dp[i][j-1][0], m[i][j])
    for i in range(1, k+1):
        for j in range(n):
            for x in range(n):
                if i == 1:
                    dp[j][x][i] = min(dp[max(j-1, 0)][x][i-1], dp[j][max(x-1, 0)][i-1], m[j][x])
                else:
                    dp[j][x][i] = float('inf')
                    for y in range(n):
                        if (j > 0 and y == x) or (y > 0 and j == x):
                            continue
                        dp[j][x][i] = min(dp[j][x][i], dp[max(j-1, 0)][y][i-1], dp[y][max(x-1, 0)][i-1])
    res = []
    i, j = n - 1, n - 1
    for _ in range(k):
        res.append(m[i][j])
        if i > 0 and j > 0:
            if dp[i-1][j][k-1] < dp[i][j-1][k-1]:
                i -= 1
            else:
                j -= 1
        elif i > 0:
            i -= 1
        else:
            j -= 1
    return res