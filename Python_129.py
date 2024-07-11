def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        cur_min = float("inf")
        cur_cell = None
        for i in range(n):
            for j in range(n):
                if m[i][j] < cur_min:
                    cur_min = m[i][j]
                    cur_cell = (i, j)
        res.append(cur_min)
        if cur_cell is not None:
            m[cur_cell[0]][cur_cell[1]] = float("inf")
    return res