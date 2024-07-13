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
    for l in range(k + 1):
        for i in range(n):
            for j in range(n):
                if l == 0:
                    continue
                if i > 0 and dp[i - 1][j][l - 1] < dp[i][j][l]:
                    dp[i][j][l] = min(dp[i - 1][j][l - 1], m[i][j])
                if j > 0 and dp[i][j - 1][l - 1] < dp[i][j][l]:
                    dp[i][j][l] = min(dp[i][j - 1][l - 1], m[i][j])
    path = []
    i, j, l = n - 1, n - 1, k
    while l > 0:
        path.append(m[i][j])
        if dp[i][j][l - 1] == min(dp[i - 1][j][l - 1], dp[i][j - 1][l - 1]):
            i -= 1
        else:
            j -= 1
        l -= 1
    return path[::-1]