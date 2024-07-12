def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float("inf")] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = 0
    for i in range(1, n):
        dp[i][0][0] = min(dp[i - 1][0][0], m[i - 1][0])
    for j in range(1, n):
        dp[0][j][0] = min(dp[0][j - 1][0], m[0][j - 1])
    for i in range(1, n):
        for j in range(1, n):
            dp[i][j][0] = min(
                min(dp[i - 1][j][0], dp[i][j - 1][0]), m[i - 1][j] + m[i][j - 1]
            )
    res = []
    i, j, path_len = 0, 0
    while path_len > 0:
        if (
            i > 0
            and dp[i][j][path_len]
            == min(dp[i - 1][j][path_len - 1], dp[i][j - 1][path_len - 1]) + m[i - 1][j]
        ):
            res.append(m[i - 1][j])
            i -= 1
        elif (
            j > 0
            and dp[i][j][path_len]
            == min(dp[i][j - 1][path_len - 1], dp[i - 1][j][path_len - 1]) + m[i][j - 1]
        ):
            res.append(m[i][j - 1])
            j -= 1
        else:
            if (
                i > 0
                and j > 0
                and dp[i][j][path_len]
                == min(
                    dp[i - 1][j - 1][path_len - 1],
                    dp[i - 1][j][path_len - 1],
                    dp[i][j - 1][path_len - 1],
                )
                + m[i - 1][j]
            ):
                res.append(m[i - 1][j])
                i -= 1
                j -= 1
            else:
                if (
                    i > 0
                    and dp[i][j][path_len]
                    == min(dp[i - 1][j][path_len - 1], dp[i - 1][j - 1][path_len - 1])
                    + m[i - 1][j]
                ):
                    res.append(m[i - 1][j])
                    i -= 1
                else:
                    if (
                        j > 0
                        and dp[i][j][path_len]
                        == min(
                            dp[i][j - 1][path_len - 1], dp[i - 1][j - 1][path_len - 1]
                        )
                        + m[i][j - 1]
                    ):
                        res.append(m[i][j - 1])
                        j -= 1
        path_len -= 1
    return res[::-1]