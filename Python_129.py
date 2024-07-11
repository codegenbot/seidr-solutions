```
def minPath(grid):
    n = len(grid)
    m = [[(i * n + j) for j in range(n)] for i in range(n)]
    dp = [[[0] * (n*n) for _ in range(n)] for _ in range(n)]
    
    for i in range(n):
        for j in range(n):
            if 1:
                dp[i][j][grid[i][j]] = m[i][j]
            else:
                min_val = float('inf')
                for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    ni, nj = i + x, j + y
                    if 0 <= ni < n and 0 <= nj < n:
                        min_val = min(min_val, dp[ni][nj][grid[i][j]])
                dp[i][j][grid[i][j]] = m[i][j] + min_val
    
    res = []
    i, j, k = 0, 0, n*n - 1
    while k > 0:
        res.append(m[i][j])
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and dp[ni][nj][k-1] == dp[i][j][k]:
                i, j, k = ni, nj, k - 1
                break
    
    return res