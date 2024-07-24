```
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                queue = [(i, j, [grid[i][j]])]
                while queue:
                    x, y, path = queue.pop(0)
                    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in path[:k]:
                            queue.append((nx, ny, path + [grid[nx][ny]]))
                            if len(path) == k:
                                res = min(res, path, key=lambda x: sorted(x)[:k])
    return res