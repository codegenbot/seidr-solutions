def minPath(grid, k):
    rows, cols = len(grid), len(grid[0])
    dp = [[float("inf")] * cols for _ in range(rows)]
    dp[0][0] = grid[0][0]
    path = []

    for i in range(rows):
        for j in range(cols):
            if i > 0:
                dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j])
            if j > 0:
                dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j])
    
    i, j = rows - 1, cols - 1
    while i > 0 or j > 0:
        path.append(grid[i][j])
        if i > 0 and dp[i][j] == dp[i-1][j] + grid[i][j]:
            i -= 1
        else:
            j -= 1
    path.append(grid[0][0])
    
    return path[::-1]