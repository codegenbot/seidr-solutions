```
def findMinSpecialPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    dp = [[[float('inf')] * (k + 1) for _ in range(n)] for _ in range(n)]
    dp[0][0][0] = m[0][0]
    
    for l in range(1, k + 1):
        for i in range(n):
            for j in range(n):
                if l == 1:
                    dp[i][j][l] = min(min(dp[max(i-1, 0)][j][l-1], dp[i][max(j-1, 0)][l-1]), m[i][j])
                else:
                    dp[i][j][l] = float('inf')
                    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        if 0 <= i + x < n and 0 <= j + y < n:
                            dp[i][j][l] = min(dp[i][j][l], dp[i+x][j+y][l-1] + m[i][j])
    
    path = []
    i, j = 0, 0
    for _ in range(k):
        path.append(m[i][j])
        if dp[i][j][k-1] == dp[max(i-1, 0)][j][k-2] + m[i][j]:
            i -= 1
        elif dp[i][j][k-1] == dp[i][max(j-1, 0)][k-2] + m[i][j]:
            j -= 1
        else:
            if i > 0 and j < n - 1:
                if dp[i][j+1][k-1] < dp[i+1][j][k-1]:
                    j += 1
                else:
                    i += 1
            elif i > 0:
                i += 1
            else:
                j += 1
    
    return path