def cut_vector(v):
    n = len(v)
    dp = [[math.inf for _ in range(n)] for _ in range(2)]
    for i in range(n):
        for j in range(i+1, n):
            if v[i] == v[j]:
                dp[0][j] = 0
                dp[1][j] = i + 1
            else:
                diff = abs(v[i] - v[j])
                if diff < dp[0][j]:
                    dp[0][j] = diff
                    dp[1][j] = i + 1
    return dp[1]