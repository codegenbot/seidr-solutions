```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        t = {}
        for i in range(n):
            for j in range(n):
                if (i, j) not in res:
                    t[m[i][j]] = m[i][j]
        min_val = min(t)
        res.append(min_val)
        for i in range(n):
            for j in range(n):
                if m[i][j] == min_val:
                    m[i][j] = n * n
    return res