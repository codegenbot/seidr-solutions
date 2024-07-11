def minPath(grid):
    n = len(grid)
    dp = [[0] * (n + 1) for _ in range(n)]

    for k in range(1, n**2 + 1):
        for i in range(n):
            for j in range(n):
                if k == 1:
                    dp[i][k] = grid[i][j]
                else:
                    min_val = float("inf")
                    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        ni, nj = i + x, j + y
                        if 0 <= ni < n and 0 <= nj < n:
                            min_val = min(min_val, dp[ni][k - 1])
                    dp[i][k] = grid[i][j] + min_val

    res = []
    i, k = 0, n**2
    while k > 0:
        res.append(grid[i])
        for x in range(n):
            if k == 1:
                break
            else:
                min_val = float("inf")
                for y in range(n):
                    ni = i + (y - i) // ((k - 1) % n)
                    nj = (k - 1) % n
                    if 0 <= ni < n and 0 <= nj < n:
                        min_val = min(min_val, dp[ni][k - 1])
                k -= min_val
                i = ni
        k -= 1

    return res