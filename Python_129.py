def minPath(grid, k):
    n = len(grid)
    m = [[(i - 1) * n + j] for i in range(1, n + 1) for j in range(1, n + 1)]
    res = []
    for _ in range(k):
        temp = {}
        for x in range(n):
            for y in range(n):
                if (x, y) not in res:
                    temp[m[x][y]] = m[x][y]
        min_val = min(temp.keys())
        res.append(min_val)
        for x in range(n):
            for y in range(n):
                if m[x][y] == min_val:
                    m[x][y] = 0
    return res