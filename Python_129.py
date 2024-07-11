```
def minPath(grid):
    n = len(grid)
    m = [[(i * n + j) for j in range(n)] for i in range(n)]
    dp = [[[0] * (len(m[0][0]) + 1) for _ in range(n)] for _ in range(n)]
    
    for i in range(n):
        for j in range(n):
            if len(m[0][0]) == 1:
                dp[i][j][1] = m[i][j]
            else:
                min_val = float('inf')
                for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    ni, nj = i + x, j + y
                    if 0 <= ni < n and 0 <= nj < n:
                        min_val = min(min_val, dp[ni][nj][len(m[0][0]) - 1])
                dp[i][j][len(m[0][0])] = m[i][j] + min_val
    
    res = []
    i, j, k = 0, 0, len(m[0][0]) - 1
    while k > 0:
        res.append(m[i][j])
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and dp[ni][nj][k-1] == dp[i][j][k]:
                i, j, k = ni, nj, k - 1
                break
    
    return res