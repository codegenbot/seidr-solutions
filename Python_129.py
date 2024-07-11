def findMinPath(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [
        [[0] * (len(grid[0]) + 1) for _ in range(len(grid))] for _ in range(len(grid))
    ]

    for i in range(1, n):
        for j in range(1, len(grid[0])):
            if grid[i][j] == "X":
                dp[i][j][2] = min(min(dp[i - 1][j][2], dp[i][j - 1][2]), m[i][j])
    path = []
    i, j = 0, 0
    for _ in range(len(grid[0])):
        path.append(m[i][j])
        if grid[i][j] == "X":
            if i > 0 and j < len(grid[0]) - 1:
                if dp[i][j + 1][2] < dp[i + 1][j][2]:
                    j += 1
                else:
                    i += 1
            elif i > 0:
                i += 1
            else:
                j += 1
        else:
            i -= 1
    return path