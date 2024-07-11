```
def minPath(grid, k):
    n = len(grid)
    res = []
    for _ in range(k):
        pos = [(i, j) for i in range(n) for j in range(n)]
        while pos:
            x, y = pos[0]
            if grid[x][y] == 1:
                break
            pos.pop(0)
        res.append((x, y))
        for i in range(n):
            for j in range(n):
                if (i, j) != (x, y) and grid[i][j] == 1:
                    grid[i][j] -= 1
    return res