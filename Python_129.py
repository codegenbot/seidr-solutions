def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                path.append(grid[ni][nj])
                res.append(dfs(ni, nj, path))
                visited[ni][nj] = False
        return min(res) if res else []

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                res.append(dfs(i, j, [grid[i][j]]))
                visited[i][j] = False

    return min(res)