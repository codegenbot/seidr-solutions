```
def minPath(grid, k):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for i in range(n):
        for j in range(n):
            if grid[i][j] == i * n + j:
                m[i][j] = 1

    q = [(i, j) for i in range(n) for j in range(n) if m[i][j]]
    visited = set(q)
    res = [grid[i][j] for (i, j) in q]

    while k > 0:
        temp = []
        for (x1, y1), (x2, y2) in [(a, b), (c, d)] if [(a, b), (c, d)] not in [[(x1, y1), (x2, y2)], [(x1, y1), (y2, x1)], [(x1, y1), (0, 0)], [(x1, y1), (n-1, n-1)]]:
            if (x2, y2) in visited and m[x2][y2] == m[x1][y1] + 1 and m[x2][y2]:
                temp.append((x2, y2))
        q = temp
        for (i, j) in q:
            res.append(grid[i][j])
            visited.remove((i, j))
            m[i][j] -= 1
        k -= len(q)

    return res