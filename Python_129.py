def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                res.append(1)
                break
    while k > 0:
        for i in range(n):
            for j in range(n):
                if (i, j) not in [(x, y) for x, y in zip(*[list(map(lambda x: list(x).index(int(x)), [grid[x][y] for x in range(n)])))])[:k]:
                    res.append(grid[i][j])
                    k -= 1
    return res