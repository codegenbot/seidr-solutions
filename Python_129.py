def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    res = []
    for _ in range(k):
        max_val = -1
        next_cell = None

        for x in range(n):
            for y in range(n):
                if (x, y) not in set(zip(*[i[j] for i in res])):
                    val = m[x][y]
                    if val > max_val:
                        max_val = val
                        next_cell = (x, y)

        res.append(next_cell)

    return [grid[i][j] for i, j in res]