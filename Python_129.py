def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                res.append(1)
                break
    return (
        res
        + [str(i) for i in set([grid[x][y] for x in range(n) for y in range(n)])][
            : (k + 1)
        ]
    )