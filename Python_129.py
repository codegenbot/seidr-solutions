def findMinStep(s):
    n = len(s)
    dp = [[float("inf")] * (n + 1) for _ in range(n + 1)]

    for i in range(n):
        dp[i][i] = 0
    for length in range(2, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1
            for k in range(i, j + 1):
                if s[i] == s[k]:
                    dp[i][j] = min(
                        dp[i][j],
                        dp[i][k - 1] if k > i else 0 + (0 if s[i] != s[k] else 1),
                    )
    return dp[0][n - 1]