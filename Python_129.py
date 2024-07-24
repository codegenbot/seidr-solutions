def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        curr_min = float("inf")
        curr_cell = None
        for i in range(n):
            for j in range(n):
                if (i, j) not in set(map(tuple, [res + [m[i][j]]] * k)):
                    if m[i][j] < curr_min:
                        curr_min = m[i][j]
                        curr_cell = (i, j)
        res.append(curr_min)
    return res