def minPath(grid):
    n = len(grid)
    dp = [[float('inf')] * (n + 1) for _ in range(n)]
    for i in range(n):
        dp[i][0] = dp[i-1][0] if i > 0 else grid[i][0]
        dp[0][i] = dp[0][i-1] if i > 0 else grid[0][i]

    for i in range(1, n):
        for j in range(1, n):
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
            
    path = []
    i, j = n - 1, n - 1
    while i > 0 or j > 0:
        if i > 0 and j > 0:
            path.append(grid[i][j])
            if dp[i-1][j] < dp[i][j-1]:
                i -= 1
            else:
                j -= 1
        elif i > 0:
            path.append(grid[i][j])
            i -= 1
        else:
            path.append(grid[i][j])
            j -= 1
    return path[::-1]