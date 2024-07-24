```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for i in range(n)] for j in range(n)]
    dp = [[[float("inf")] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = 0
    for i in range(k):
        for j in range(n):
            if i > 0:
                dp[j][0][i] = m[j][0]
            for k1 in range(1, n):
                dp[k1][j][i] = (
                    min(dp[k1 - 1][j][i], dp[k1][j - 1][i], dp[k1][j + 1][i])
                    if i > 0
                    else m[k1][j]
                )
    path = []
    j, k1 = n - 1, k
    while k1 > 0:
        if j == 0 and k1 % n != 0:  
            k1 -= 1
            continue
        path.append(m[j][k1 % n])
        k1 -= 1
        if k1 % n and dp[j][k1 % n][k1 // n] < dp[(j + 1) % n][k1 % n][k1 // n]:
            j = (j + 1) % n
    return path[::-1]