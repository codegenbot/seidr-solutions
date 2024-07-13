```
def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [grid[0][0]])]
    res = None
    while queue:
        i, j, path = queue.pop(0)
        if len(path) == k + 1:
            if not res or path < res:
                res = path
        else:
            for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
                if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                    visited[x][y] = True
                    queue.append((x, y, path + [grid[x][y]]))
    return res