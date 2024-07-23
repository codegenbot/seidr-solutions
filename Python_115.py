def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)

    dp = [float("inf")] * (total_water + 1)
    dp[0] = 0

    for i in range(n):
        for j in range(m):
            if grid[i][j]:
                for k in range(total_water, 0, -1):
                    if k >= capacity:
                        dp[k] = min(dp[k], dp[k - capacity] + 1)

    return dp[total_water]