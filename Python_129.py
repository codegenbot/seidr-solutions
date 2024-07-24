def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    total_values = [i for i in range(1, n * n + 1)]
    res = []

    def dfs(x, y, path, k):
        if len(path) == k:
            return path
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m:
                if grid[nx][ny] not in path:
                    res.append(dfs(nx, ny, path + [grid[nx][ny]], k))
        return min(res, key=lambda x: (x.index(grid[x[0]][x[1]]), len(x) - 1)) or []

    for i in range(n):
        for j in range(m):
            if grid[i][j] not in total_values:
                continue
            res = dfs(i, j, [grid[i][j]], k)
            if res:
                return sorted(res)