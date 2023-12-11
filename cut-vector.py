def cut_vector(vector):
    n = len(vector)
    dp = [[0] * (n + 1) for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            if vector[j - 1] == vector[i - 1]:
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1)
            else:
                dp[i][j] = max(dp[i][j], dp[i][j - 1])

    return vector[:dp[n][n]], vector[dp[n][n]:]