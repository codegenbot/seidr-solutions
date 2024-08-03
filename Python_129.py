def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float("inf")] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]

    for i in range(1, n):
        dp[i][0][0] = min(dp[i - 1][0][0], m[i][0])
        for j in range(1, n):
            dp[j][0][0] = min(dp[j - 1][0][0], m[j][0])

    for i in range(k + 1):
        if i == 0:
            continue
        for j in range(n):
            for x in range(i):
                if j > 0 and dp[j - 1][x][i - 1] + m[j][0] < dp[j][x][i]:
                    dp[j][x][i] = dp[j - 1][x][i - 1] + m[j][0]
                if j < n - 1 and dp[j + 1][x][i - 1] + m[j][0] < dp[j][x][i]:
                    dp[j][x][i] = min(dp[j + 1][x][i - 1] + m[j][0], dp[j][x][i])
    res = []
    i, j, k = n - 1, 0, k
    while k > 0:
        if k == 1:
            res.append(m[i][j])
            break
        for x in range(k):
            if i > 0 and dp[i - 1][x][k - 1] + m[i][j] < dp[i][x][k]:
                i -= 1
                j = x
            elif i < n - 1 and dp[i + 1][x][k - 1] + m[i][j] < dp[i][x][k]:
                i += 1
                j = x
        res.append(m[i][j])
        k -= 1
    return res[::-1]