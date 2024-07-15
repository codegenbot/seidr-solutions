def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if (i, j) not in res:
                    temp[m[i][j]] = (i, j)
        res.append(min(temp))
    return [m[i][j] for i, j in res]